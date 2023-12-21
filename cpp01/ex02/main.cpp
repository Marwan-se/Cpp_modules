/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msekhsou <msekhsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 17:43:53 by msekhsou          #+#    #+#             */
/*   Updated: 2023/12/21 21:08:31 by msekhsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string msg = "HI THIS IS BRAIN";
    std::string *stringPTR = &msg;
    std::string &stringREF = msg;

    std::cout << "memory address msg :" << &msg << std::endl;
    std::cout << "memory address stringPTR :" << stringPTR << std::endl;
    std::cout << "memory address stringREF :" << &stringREF << std::endl;

    std::cout << "msg :" << msg << std::endl;
    std::cout << "stringPTR :" << *stringPTR << std::endl;
    std::cout << "stringREF :" << stringREF << std::endl;
    
}
