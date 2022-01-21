/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 22:09:35 by bperez            #+#    #+#             */
/*   Updated: 2022/01/20 08:42:29 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "Form.hpp"

#include <iostream>

class Form;

class Bureaucrat
{
	private:
		const std::string _name;
		int _grade;

	public:
		Bureaucrat();
		Bureaucrat(std::string const &name, int grade);
		Bureaucrat(Bureaucrat &c);
		Bureaucrat &operator=(Bureaucrat &c);
		~Bureaucrat();

		std::string getName();
		int getGrade();
		void increaseGrade(int amount);
		void decreaseGrade(int amount);

		void signForm(Form &c);

		class GradeTooHighException : public std::exception
		{
		public:
			const char *what() const throw()
			{
				return ("Grade is too high");
			}
		};

		class GradeTooLowException : public std::exception
		{
		public:
			const char *what() const throw()
			{
				return ("Grade is too low");
			}
		};
};

std::ostream &operator<<(std::ostream &o, Bureaucrat &c);

#endif
