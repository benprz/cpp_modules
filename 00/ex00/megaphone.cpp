/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:29:35 by bperez            #+#    #+#             */
/*   Updated: 2021/12/02 18:14:03 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>

std::string    strToUpper(std::string str)
{
    int i = 0;

    while (str[i])
    {
        str[i] = toupper(str[i]);
        i++;
    }
    return (str);
}

int main(int argc, char **argv)
{
    if (argc > 1)
    {
        argv++;
        while (*argv)
        {
            std::cout << strToUpper(*argv);
            argv++;
        }
        std::cout << std::endl;
    }
    else
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    return (EXIT_SUCCESS);
}