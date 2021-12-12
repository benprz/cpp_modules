/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neben <neben@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 08:08:31 by bperez            #+#    #+#             */
/*   Updated: 2021/12/08 11:09:32 by neben            ###   ########lyon.fr   */
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

enum
{
	DEBUG_ID,
	INFO_ID,
	WARNING_ID,
	ERROR_ID
};

class Karen
{
private:
	void	_debug(void);
	void	_info(void);
	void	_warning(void);
	void	_error(void);
public:
	void	complain(std::string level);
	Karen();
	~Karen();
};


#endif
