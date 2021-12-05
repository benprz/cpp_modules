/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neben <neben@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 18:20:20 by bperez            #+#    #+#             */
/*   Updated: 2021/12/05 03:56:30 by neben            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	contacts_number = 0;
}

PhoneBook::~PhoneBook()
{
}

void add_data_to_contact(std::string *data, std::string toprint)
{
	std::string line;

	while (*data == "" && std::cin.eof() == 0)
	{
		std::cout << toprint;
		std::getline(std::cin, line);
		*data = line;
	}
}

void PhoneBook::addContact(void)
{
	std::string line;

	if (contacts_number < 9)
	{
		add_data_to_contact(&Contacts[contacts_number].first_name, "First name : ");
		add_data_to_contact(&Contacts[contacts_number].last_name, "Last name : ");
		add_data_to_contact(&Contacts[contacts_number].nickname, "Nickname : ");
		add_data_to_contact(&Contacts[contacts_number].phone_number, "Phone number : ");
		add_data_to_contact(&Contacts[contacts_number].darkest_secret, "Darkest secret : ");
		contacts_number++;
	}
	else
		std::cout << "The number of contacts reached its max value (9)" << std::endl;
}

void	printContactData(std::string data)
{
	int	i = 0;

	if (data.length() > 10)
	{
		i = 0;
		while (i < 9)
		{
			std::cout << data[i];
			i++;
		}
		std::cout << ". | ";
	}
	else
	{
		std::cout << std::setw(10);
		std::cout << data << " | ";
	}
}

void	displayContacts(Contact *Contacts, int contacts_number)
{
	int	i = 0;

	std::cout << "---------- | ---------- | ---------- | ----------" << std::endl;
	std::cout << "INDEX      | FIRST NAME | LAST NAME  | NICKNAME  " << std::endl;
	std::cout << "---------- | ---------- | ---------- | ----------" << std::endl;
	while (i < contacts_number)
	{
		std::cout << std::setw(10);
		std::cout << i + 1 << " | ";
		printContactData(Contacts[i].first_name);
		printContactData(Contacts[i].last_name);
		printContactData(Contacts[i].nickname);
		std::cout << std::endl;
		i++;
	}
	std::cout << "           |            |            |           " << std::endl;
}

void PhoneBook::searchContact(void)
{
	std::string	line;
	int			index;

	displayContacts(Contacts, contacts_number);
	while (1)
	{
		std::cout << "index: ";
		std::getline(std::cin, line);
		if (std::cin.eof())
			break ;
		else if (line.length() == 1)
		{
			index = line[0] - 48;
			if (index >= 1 && index <= contacts_number && index <= contacts_number)
			{
				index -= 1;
				std::cout << "First name : " << Contacts[index].first_name << std::endl;
				std::cout << "Last name : " << Contacts[index].last_name << std::endl;
				std::cout << "Nickname : " << Contacts[index].nickname << std::endl;
				std::cout << "Phone number : " << Contacts[index].phone_number << std::endl;
				std::cout << "Darkest secret : " << Contacts[index].darkest_secret << std::endl;
				break ;
			}
		}
		std::cout << "Please enter a valid index (1-" << contacts_number << ")" << std::endl;
	}
}
