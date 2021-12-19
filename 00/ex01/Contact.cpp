/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neben <neben@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 03:55:43 by bperez            #+#    #+#             */
/*   Updated: 2021/12/19 15:26:36 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

std::string	Contact::getData(std::string type)
{
	if (type == "First name")
		return (_first_name);
	else if (type == "Last name")
		return (_last_name);
	else if (type == "Nickname")
		return (_nickname);
	else if (type == "Phone number")
		return (_phone_number);
	else if (type == "Darkest secret")
		return (_darkest_secret);
	return ("");
}

void	Contact::setData(std::string type, std::string val)
{
	if (type == "First name")
		_first_name = val;
	else if (type == "Last name")
		_last_name = val;
	else if (type == "Nickname")
		_nickname = val;
	else if (type == "Phone number")
		_phone_number = val;
	else if (type == "Darkest secret")
		_darkest_secret = val;
}

Contact::~Contact()
{
}
