/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neben <neben@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 08:08:42 by bperez            #+#    #+#             */
/*   Updated: 2021/12/08 11:08:57 by neben            ###   ########lyon.fr   */
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
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		switch (get_complaint_id(argv[1]))
		{
			DEBUG_ID: 
				
		}
	}
}
