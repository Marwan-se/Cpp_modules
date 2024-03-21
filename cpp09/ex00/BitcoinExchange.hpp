/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 10:33:14 by msekhsou          #+#    #+#             */
/*   Updated: 2024/03/21 21:01:12 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <string>
#include <algorithm>
#include<map>
#include <fstream>

class   BitcoinExchange
{
    private:
        std::map<std::string, float> _btcDataBase;
    public:
        BitcoinExchange();
        ~BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &copy);
        BitcoinExchange &operator=(const BitcoinExchange &copy);
        void    parse_input(std::ifstream &input);
        void    check_vline(std::string date);
        void    getdata();
        bool    ParseDate(std::string date);
        bool	ParseValue(std::string value);
        void    isYear(int year);
        bool    is_leap_year(int year);
        void    isMonth(int month);
};


#endif