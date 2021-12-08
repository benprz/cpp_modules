/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neben <neben@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 05:55:18 by bperez            #+#    #+#             */
/*   Updated: 2021/12/08 07:56:38 by neben            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <iomanip>

#define BUFSIZE 100

void	write_text_and_replace(std::ofstream &file, std::string &text, std::string s1, std::string s2)
{
	int	i = 0;
	int	j = 0;
	int	k = 0;

	while (text[i])
	{
		if (text[i] == s1[j])
		{
			j++;
			if (j == (int)s1.length())
			{
				file << text.substr(k, i - j - k + 1) << s2;
				k = i + 1;
				j = 0;
			}
		}
		else
			j = 0;
		i++;
	}
	file << text.substr(k, i);
}

int	not_sed(std::string filename, std::string s1, std::string s2)
{
	int				err = 1;
	std::ifstream	file;
	std::ofstream	replace_file;
	char			buffer[BUFSIZE + 1] = {0};
	std::string		replaced_text;

	file.open(filename);
	if (file.is_open() == true)
	{
		filename += ".replace";
		replace_file.open(filename);
		if (replace_file.is_open() == true)
		{
			while (1)
			{
				file.read(buffer, BUFSIZE);
				if (buffer[0] == '\0')
					break ;
				buffer[BUFSIZE] = '\0';
				replaced_text += buffer;
				bzero(buffer, sizeof(char) * (BUFSIZE + 1));
			}
			write_text_and_replace(replace_file, replaced_text, s1, s2);
			replace_file.close();
			err = 0;
		}
		file.close();
	}
	return (err);
}

int	main(int argc, char *argv[])
{
	if (argc == 4)
	{
		if (strlen(argv[1]))
		{
			if (not_sed(argv[1], argv[2], argv[3]) == 0)
				return (EXIT_SUCCESS);
		}
	}
	return (EXIT_FAILURE);
}
