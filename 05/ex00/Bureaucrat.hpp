/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 09:16:26 by bperez            #+#    #+#             */
/*   Updated: 2021/12/21 12:37:15 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>

class Bureaucrat  
{
	private:
		const std::string	_name;
		int	_grade;

	public:

		Bureaucrat();
		Bureaucrat(std::string name);
		Bureaucrat(Bureaucrat &c);
		Bureaucrat &operator=(Bureaucrat &c);
		~Bureaucrat();

		std::string	getName();
		int	getGrade();

		void	incrementGrade();
		void	decrementGrade();

};
		
std::ostream	&operator<<(std::ostream &o, Bureaucrat &c);

#endif
