/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 18:20:20 by bperez            #+#    #+#             */
/*   Updated: 2021/12/02 18:56:04 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string line;

    while (line != "exit")
    {
        std::cout << "PhoneBook> ";
        std::cin >> line;
    }
}