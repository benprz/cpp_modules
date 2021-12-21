/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 08:08:31 by bperez            #+#    #+#             */
/*   Updated: 2021/12/21 11:13:06 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>

#define COMPLAINTS_NUMBER 4
# define DEBUG		&Karen::_debug
# define INFO		&Karen::_info
# define WARNING	&Karen::_warning
# define ERROR		&Karen::_error
# define C_DEBUG "DEBUG"
# define C_INFO "INFO"
# define C_WARNING "WARNING"
# define C_ERROR "ERROR"

class Karen
{
private:
	void	_debug(void);
	void	_info(void);
	void	_warning(void);
	void	_error(void);
public:
	Karen();
	~Karen();

	void	complain(std::string level);
};

#endif
