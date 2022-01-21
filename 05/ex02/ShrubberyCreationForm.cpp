/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 09:44:37 by bperez            #+#    #+#             */
/*   Updated: 2022/01/21 03:25:46 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : Form("ShrubberyCreationForm", 145, 137, target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &c) : Form(c)
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &c)
{
	Form::operator=(c);
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::action()
{
	std::ofstream file(this->getTarget() + "_shrubbery");

	if (file.is_open() == true)
		file <<
		"                                                         .     \n" <<
		"                                              .         ;      \n" <<
		"                 .              .              ;%     ;;       \n" <<
		"                   ,           ,                :;%  %;        \n" <<
		"                    :         ;                   :;%;'     ., \n" <<  
		"           ,.        %;     %;            ;        %;'    ,;   \n" <<
		"             ;       ;%;  %%;        ,     %;    ;%;    ,%'    \n" <<
		"              %;       %;%;      ,  ;       %;  ;%;   ,%;'     \n" <<
		"               ;%;      %;        ;%;        % ;%;  ,%;'       \n" <<
		"                `%;.     ;%;     %;'         `;%%;.%;'         \n" <<
		"                 `:;%.    ;%%. %@;        %; ;@%;%'            \n" <<
		"                    `:%;.  :;bd%;          %;@%;'              \n" <<
		"                      `@%:.  :;%.         ;@@%;'               \n" <<
		"                        `@%.  `;@%.      ;@@%;                 \n" <<
		"                          `@%%. `@%%    ;@@%;                  \n" <<
		"                            ;@%. :@%%  %@@%;                   \n" <<
		"                              %@bd%%%bd%%:;                    \n" <<
		"                                #@%%%%%:;;                     \n" <<
		"                                %@@%%%::;                      \n" <<
		"                                %@@@%(o);  . '                 \n" <<
		"                                %@@@o%;:(.,'                   \n" <<
		"                            `.. %@@@o%::;                      \n" <<
		"                               `)@@@o%::;                      \n" <<
		"                                %@@(o)::;                      \n" <<
		"                               .%@@@@%::;                      \n" <<
		"                               ;%@@@@%::;.                     \n" <<
		"                              ;%@@@@%%:;;;.                    \n" <<
		"                          ...;%@@@@@%%:;;;;,..                 \n";
	else
	{
		std::cerr << "Failed creating file during execution of the form " << std::endl;
	}

}
