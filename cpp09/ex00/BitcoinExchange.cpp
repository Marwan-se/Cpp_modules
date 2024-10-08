/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 10:33:15 by msekhsou          #+#    #+#             */
/*   Updated: 2024/03/28 23:16:44 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <cctype>
#include <cstddef>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <ios>
#include <iostream>
#include <iterator>
#include <sstream>
#include <string>

/*------------------------ Canonical Form ------------------------*/
BitcoinExchange::BitcoinExchange()
{
	this->getdata();
	return;
}

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy)
{
	*this = copy;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &copy)
{
	(void)copy;
	return (*this);
}
/*----------------------------------------------------------------*/

void	BitcoinExchange::getdata()
{
	std::ifstream input("data.csv");
	
	if (!input.is_open())
	{
		std::cerr << "Error: Could not open file." << std::endl;
		exit(1);
	}
	std::string line;
	std::string date;
	std::string rate;

	std::getline(input, line); // skip first line
	while (std::getline(input, line))
	{
		date = line.substr(0, line.find(','));
		rate = line.substr(line.find(',') + 1, line.length());
		_btcDataBase[date] = std::atof(rate.c_str());
	}
	input.close();
}

void    HeaderErr()
{
	std::cerr << "File should start with " << "' date | value '" << std::endl;
	exit(1);
}

bool isAllDigits(const std::string& str)
{
	bool hasDecimalPoint = false;

	for (std::string::const_iterator it = str.begin(); it != str.end(); ++it)
	{
		if (!std::isdigit(*it))
		{
			if (*it == '.' && !hasDecimalPoint)
				hasDecimalPoint = true;
			else
				return false;
		}
	}
	return true;
}


int    BitcoinExchange::isYear(int year)
{
	if (year < 2009 || year < 0)
		return 0;
	return 1;
}

bool    BitcoinExchange::is_leap_year(int year)
{
	return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

int    BitcoinExchange::isMonth(int month)
{
	if (month < 1 || month > 12)
		return 0;
	return 1;
}

//function to skip whitespaces
int	skip_space(std::string str)
{
	size_t i = 0;
	while (str[i] <= 32)
		i++;
	return i;
}

bool    BitcoinExchange::ParseDate(std::string date)
{
	// start = skipsc()
	int start = skip_space(date);
	
	std::string year = date.substr(start, 4);
	std::string month = date.substr(start + 5, 2);
	std::string day = date.substr(start + 8, 2);
	
	int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if (year.length() != 4 || month.length() != 2 || day.length() != 2)
		return false;
	if (date[start + 4] != '-' || date[start + 7] != '-')
		return false;
	if (std::atoi(month.c_str()) < 0 || std::atoi(month.c_str()) > 12)
		return false;
	if (std::atoi(day.c_str()) < 1 || std::atoi(day.c_str()) > 31)
		return false;
	if (std::atoi(year.c_str()) < 2009 || \
		(atoi(year.c_str()) == 2009 && atoi(month.c_str()) == 1 && atoi(day.c_str()) < 2))
		return false;
	if (!isMonth(std::atoi(month.c_str())))
		return false;
	isYear(std::atoi(year.c_str()));
	if (std::atoi(month.c_str()) == 2 && is_leap_year(std::atoi(year.c_str())))
		daysInMonth[2] = 29;
	if (std::atoi(day.c_str()) > daysInMonth[std::atoi(month.c_str())])
		return false;
	return true;
}

//function to skip the whitespaces at the end of the value if found
int	skip_space_end(std::string str)
{
	size_t i = str.length() - 1;
	while (str[i] <= 32)
		i--;
	return i;
}

bool	BitcoinExchange::ParseValue(std::string value)
{
	if (value[0] == '+' || value[0] == '-')
		value = value.substr(1);
	if (value.empty())
		return false;
	if (!isAllDigits(value))
		return false;
	if (value.find('.') != std::string::npos)
	{
		if (value.find('.') == 0 || value.find('.') == value.length() - 1)
			return false;
	}
	return true;
}


void    BitcoinExchange::check_vline(std::string line)
{
	// Expected format: "YYYY-MM-DD | value"
	size_t pipeXspace = line.find(" | ");
	std::map<std::string, float>::iterator itr;
	if (pipeXspace == std::string::npos)
	{
		std::cout << "Error: bad input => " << line << std::endl;
		return ;
	}
	int start = skip_space(line);
	std::string date = line.substr(start, pipeXspace - start);
	std::string values = line.substr(pipeXspace + 3); //skip the " | " part
	int end = skip_space_end(values);
	values = values.substr(0, end + 1);
	float value = std::atof(values.c_str());
	if (line.empty() || line.size() < 14)
		std::cout << "Error: bad input => " << line << std::endl;
	else if (!ParseDate(date))
		std::cout << "Error: bad input => " << date << std::endl;
	else if (date.length() < 10 || date.length() > 10)
		std::cout << "Error: bad input => " << date << std::endl;
	else if (value < 0)
		std::cout << "Error: not a positive number." << std::endl;
	else if (value > 1000)
		std::cout << "Error: too large a number." << std::endl;
	else if (!ParseValue(values))
		std::cout << "Error: bad value =>  " << values << std::endl;
	else
	{
		itr = this -> _btcDataBase.lower_bound(date);
		if (itr->first.compare(date) != 0 )
			--itr;
		std::cout << date << " => " << value << " = " << itr->second * value << std::endl;
	}
}

void    BitcoinExchange::parse_input(std::ifstream &input)
{
	std::string line;
	std::getline(input, line);
	if (line.compare("date | value") != 0)
		HeaderErr();
	while (std::getline(input, line))
	{
		if (line.empty())
			continue;
		check_vline(line);
	}
}