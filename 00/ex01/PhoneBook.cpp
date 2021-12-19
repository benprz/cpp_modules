/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neben <neben@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 18:20:20 by bperez            #+#    #+#             */
/*   Updated: 2021/12/19 15:35:57 by bperez           ###   ########lyon.fr   */
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

void add_data_to_contact(Contact &c, std::string toprint)
{
	std::string line;

	while (c.getData(toprint) == "" && std::cin.eof() == 0)
	{
		std::cout << toprint << " : ";
		std::getline(std::cin, line);
		c.setData(toprint, line);
	}
}

void PhoneBook::addContact(void)
{
	std::string line;

	if (contacts_number < 8)
	{
		add_data_to_contact(Contacts[contacts_number], "First name");
		add_data_to_contact(Contacts[contacts_number], "Last name");
		add_data_to_contact(Contacts[contacts_number], "Nickname");
		add_data_to_contact(Contacts[contacts_number], "Phone number");
		add_data_to_contact(Contacts[contacts_number], "Darkest secret");
		contacts_number++;
	}
	else
		std::cout << "The number of registered contacts reached its max value (9)" << std::endl;
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
		printContactData(Contacts[i].getData("First name"));
		printContactData(Contacts[i].getData("Last name"));
		printContactData(Contacts[i].getData("Nickname"));
		std::cout << std::endl;
		i++;
	}
	std::cout << "           |            |            |           " << std::endl;
}

void PhoneBook::searchContact(void)
{
	std::string	line;
	int			index;

	if (contacts_number)
	{
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
					std::cout << "First name : " << Contacts[index].getData("First name") << std::endl;
					std::cout << "Last name : " << Contacts[index].getData("Last name") << std::endl;
					std::cout << "Nickname : " << Contacts[index].getData("Nickname") << std::endl;
					std::cout << "Phone number : " << Contacts[index].getData("Phone number") << std::endl;
					std::cout << "Darkest secret : " << Contacts[index].getData("Darkest secret") << std::endl;
					break ;
				}
			}
			std::cout << "Please enter a valid index (1-" << contacts_number << ")" << std::endl;
		}
	}
	else
		std::cout << "There are currently no registered contacts" << std::endl;
}
