/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neben <neben@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 08:08:42 by bperez            #+#    #+#             */
/*   Updated: 2021/12/08 10:40:11 by neben            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(void)
{
	Karen	Karen;

	Karen.complain("DEBUG");
	Karen.complain("ploof");
	Karen.complain("ERROR");
	Karen.complain("INFO");
	Karen.complain("WARNING");
}
