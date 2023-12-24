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
	std::ifstream ifs(filename);
	if (!ifs.is_open())
	{
		std::cout << "Error: file does not exist" << std::endl;
		return (1);
	}
	std::string content;
	std::string line;
	while (std::getline(ifs, line))
	{
		if (!ifs.eof())
			content += line + '\n';
		else
			content += line;
	}
	ifs.close();
	size_t pos = 0;
	while ((pos = content.find(s1, pos)) != std::string::npos)
	{
		content.erase(pos, s1.length());
		content.insert(pos, s2);
		pos += s2.length();
	}
	std::ofstream ofs(filename + ".replace");
	ofs << content;
	ofs.close();
	return (0);
}
