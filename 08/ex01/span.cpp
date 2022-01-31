/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 08:37:57 by bperez            #+#    #+#             */
/*   Updated: 2022/01/31 11:34:44 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int n)
{
	_size = n;
}

Span::Span(Span const &c)
{
	*this = c;
}

Span &Span::operator=(Span const &c)
{
	if (this != &c)
	{
		_size = c._size;
		_list = c._list;
	}
	return *this;
}

Span::~Span()
{
}

std::vector<int> const &Span::getList() const
{
	return (_list);
}

unsigned int Span::getSize() const
{
	return (_size);
}

void Span::addNumber(int n)
{
	if (_list.size() == _size)
		throw Span::MaxSizeException();
	_list.push_back(n);
}

void Span::addNumberList(std::vector<int>::iterator const &begin, std::vector<int>::iterator const &end)
{
	if (std::distance(begin, end) > _size)
		throw Span::MaxSizeException();
	_list.insert(_list.end(), begin, end);
}

unsigned int Span::shortestSpan() const
{
	if (_list.size() < 2)
		throw Span::InvalidListException();
	std::vector<int> tmp = _list;
	std::sort(tmp.begin(), tmp.end());
	std::vector<int>::iterator current = tmp.begin();
	std::vector<int>::iterator next = tmp.begin() + 1;
	unsigned int shortest_span = *next - *current;

	while (next != tmp.end())
	{
		if (static_cast<unsigned int>(*next) - *current < shortest_span)
			shortest_span = static_cast<unsigned int>(*next) - *current;
		current = next;
		next++;
	}
	return (shortest_span);
}

unsigned int Span::longestSpan() const
{
	if (_list.size() < 2)
		throw Span::InvalidListException();
	std::vector<int> tmp = _list;
	std::sort(tmp.begin(), tmp.end());
	return (static_cast<unsigned int>(tmp.back()) - tmp.front());
}
