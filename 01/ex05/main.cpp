/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 08:08:42 by bperez            #+#    #+#             */
/*   Updated: 2021/12/21 11:16:21 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(void)
{
	Karen	Karen;

	Karen.complain("DEBUG");
	Karen.complain("ERROR");
	Karen.complain("INFO");
	Karen.complain("WARNING");
	Karen.complain("");
	Karen.complain("allo");
}
