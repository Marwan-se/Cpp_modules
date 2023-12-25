/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 14:13:03 by msekhsou          #+#    #+#             */
/*   Updated: 2023/12/23 16:59:13 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Error: wrong number of arguments" << std::endl;
		return (1);
	}
	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::ifstream inpf;
	inpf.open(filename);
	if(!s1.length() || !s2.length())
	{
		std::cout << "empty s1 || s2" << std::endl;
		return (1);
	}
	if (!inpf.is_open())
	{
		std::cout << "file does not exist" << std::endl;
		return (1);
	}
	std::string content;
	std::string line;
	while (std::getline(inpf, line))
	{
		if (!inpf.eof())
			content += line + '\n';
		else
			content += line;
	}
	inpf.close();
	size_t count = 0;
	while ((count = content.find(s1, count)) != std::string::npos)
	{
		content.erase(count, s1.length());
		content.insert(count, s2);
		count += s2.length();
	}
	std::ofstream ofs(filename + ".replace");
	ofs << content;
	ofs.close();
	return (0);
}
