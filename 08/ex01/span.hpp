/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 08:20:06 by bperez            #+#    #+#             */
/*   Updated: 2022/01/31 11:52:25 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <vector>

class Span
{
	private:
		std::vector<int> _list;
		unsigned int _size;
		Span() : _size(0) {};

	public:
		Span(unsigned int N);
		Span(Span const &c);
		Span &operator=(Span const &c);
		~Span();

		std::vector<int> const &getList() const;
		unsigned int getSize() const;

		void addNumber(int n);
		void addNumberList(std::vector<int>::iterator const &begin, std::vector<int>::iterator const &end);

		unsigned int shortestSpan() const;
		unsigned int longestSpan() const;

		class MaxSizeException : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("List reached its max size");
				}
		};
		class InvalidListException : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("List too small to search");
				}
		};
};

#endif
