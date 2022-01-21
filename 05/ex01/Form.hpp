/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 15:03:22 by bperez            #+#    #+#             */
/*   Updated: 2022/01/20 09:00:56 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

#include <iostream>

class Bureaucrat;

class Form 
{
	private:
		const std::string _name;
		bool _signed;
		const int _signGrade;
		const int _execGrade;

	public:
		Form();
		Form(std::string const &name, int const &signGrade, int const &execGrade);
		Form(Form &c);
		Form &operator=(Form &c);
		~Form();

		std::string getName();
		bool getSigned();
		int getSignGrade();
		int getExecGrade();

		void beSigned(Bureaucrat &c);

		class GradeTooLowException : public std::exception
		{
		public:
			const char *what() const throw()
			{
				return ("Permission denied: Grade too low");
			}
		};
};

std::ostream &operator<<(std::ostream &o, Form &c);


#endif
