/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neben <neben@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 08:08:42 by bperez            #+#    #+#             */
/*   Updated: 2021/12/20 17:28:00 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	get_complaint_id(std::string complaint)
{
	if (complaint == C_DEBUG)
		return (DEBUG_ID);
	else if (complaint == C_INFO)
		return (INFO_ID);
	else if (complaint == C_WARNING)
		return (WARNING_ID);
	else if (complaint == C_ERROR)
		return (ERROR_ID);
	return (-1);
}

int	main(int argc, char **argv)
{
	Karen	Karen;

	if (argc == 2)
	{
		switch (get_complaint_id(argv[1]))
		{
			case DEBUG_ID: 
				Karen.complain("DEBUG");
				Karen.complain("INFO");
				Karen.complain("WARNING");
				Karen.complain("ERROR");
				break ;
			case INFO_ID:
				Karen.complain("INFO");
				Karen.complain("WARNING");
				Karen.complain("ERROR");
				break ;
			case WARNING_ID:
				Karen.complain("WARNING");
				Karen.complain("ERROR");
				break ;
			case ERROR_ID:
				Karen.complain("ERROR");
				break ;
		}
	}
	return (0);
}
