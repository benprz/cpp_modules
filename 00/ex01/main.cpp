/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neben <neben@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 03:55:21 by bperez            #+#    #+#             */
/*   Updated: 2021/12/05 04:12:30 by neben            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void strToUpper(std::string *str)
{
	int i = 0;

	while ((*str)[i])
	{
		(*str)[i] = toupper((*str)[i]);
		i++;
	}
}

int main(void)
{
	PhoneBook PhoneBook;
	std::string line;

	std::cout << "Welcome to your electronic PhoneBook !\nInstructions: ADD, SEARCH, EXIT\n"
			  << std::endl;
	while (1 && std::cin.eof() == 0)
	{
		std::cout << "query> ";
		std::getline(std::cin, line);
		strToUpper(&line);
		if (line == "EXIT")
			break;
		else if (line == "ADD")
			PhoneBook.addContact();
		else if (line == "SEARCH")
			PhoneBook.searchContact();
	}
	if (std::cin.eof())
	{
		std::cout << std::endl;
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}