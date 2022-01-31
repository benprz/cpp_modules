/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 12:35:29 by bperez            #+#    #+#             */
/*   Updated: 2022/01/21 16:46:51 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include <iostream>

class Intern
{
	private:

	public:
		Intern();
		Intern(Intern &c);
		Intern &operator=(Intern &c);
		~Intern();

		Form *makeForm(std::string const &name, std::string const &target);

		class InvalidFormException : public std::exception
		{
		public:
			const char *what() const throw()
			{
				return ("Intern failed making form : invalid name");
			}
		};
};

#endif
