/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 15:03:22 by bperez            #+#    #+#             */
/*   Updated: 2022/01/21 03:27:41 by bperez           ###   ########lyon.fr   */
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
		const std::string _target;

	public:
		Form();
		Form(std::string const &name, int const &signGrade, int const &execGrade, const std::string &target);
		Form(Form &c);
		Form &operator=(Form &c);
		virtual ~Form();

		std::string getName();
		bool getSigned();
		int getSignGrade();
		int getExecGrade();
		std::string getTarget();

		void beSigned(Bureaucrat &c);
		void execute(Bureaucrat const & executor);
		virtual void action() = 0;

		class GradeTooLowException : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("Permission denied: Grade too low");
				}
		};
		class NotSignedException : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("Permission denied: Form is not signed");
				}
		};
};

std::ostream &operator<<(std::ostream &o, Form &c);


#endif
