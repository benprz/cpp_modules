/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neben <neben@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 18:20:20 by bperez            #+#    #+#             */
/*   Updated: 2021/12/03 05:13:41 by neben            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Contact
{
public:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;
	
	Contact(void);
	~Contact();
};

Contact::Contact(void)
{
}

Contact::~Contact()
{
}

class PhoneBook
{
private:
	Contact Contacts[9];
	int		contacts_number;
public:
	PhoneBook(void);
	~PhoneBook();
	void	addContact(void);
	void	searchContacts(void);
};

PhoneBook::PhoneBook(void)
{
	contacts_number = 0;
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::addContact(void)
{
	std::string	line;

	if (contacts_number < 9)
	{
		std::getline(std::cin, line);
		Contacts[contacts_number].first_name = line;
		contacts_number++;
	}
	else
		std::cout << "The number of contacts reached its max value (9)" << std::endl;
}

void	PhoneBook::searchContacts(void)
{
	int	i;
	
	i = 0;
	while (i < contacts_number)
	{
		std::cout << "first_name: ";
		std::cout << Contacts[contacts_number].first_name << std::endl;
		i++;
	}
}

std::string    strToUpper(std::string str)
{
    int i = 0;

    while (str[i])
    {
        str[i] = toupper(str[i]);
        i++;
    }
    return (str);
}

int main(void)
{
	PhoneBook PhoneBook;
	std::string line;

	std::cout << "Welcome to your electronic PhoneBook !\nInstructions: ADD, SEARCH, EXIT\n" << std::endl;
	while (1)
	{
		std::cout << "query> ";
		std::getline(std::cin, line);
		strToUpper(line);
		if (line == "EXIT")
			break ;
		else if (line == "ADD")
			PhoneBook.addContact();
		else if (line == "SEARCH")
			PhoneBook.searchContacts();
	}
}