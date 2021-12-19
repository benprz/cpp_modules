/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neben <neben@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 03:22:27 by bperez            #+#    #+#             */
/*   Updated: 2021/12/19 14:55:56 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

# include <iomanip>
# include <iostream>

class	PhoneBook
{
private:
	Contact Contacts[8];
	int contacts_number;

public:
	PhoneBook(void);
	~PhoneBook();
	void addContact(void);
	void searchContact(void);
};

#endif
