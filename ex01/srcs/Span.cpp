/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:21:30 by mgagne            #+#    #+#             */
/*   Updated: 2024/09/26 22:02:33 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

const char*	Span::spanFullException::what() const throw()
{
	return ("Span is full");
}

const char* Span::noSpanFoundException::what() const throw()
{
	return ("Couldn't find any Span");
}

Span::~Span() {}
Span::Span() {}

Span::Span(unsigned int nb)
{
	this->nb = nb;
}

Span::Span(Span const &copy)
{
	this->nb = copy.nb;
	this->v = copy.v;
}

Span &Span::operator=(Span const &copy)
{
	this->nb = copy.nb;
	this->v = copy.v;
	return (*this);
}

void Span::addNumber(int nb)
{
	if (this->v.size() < this->nb)
		return (this->v.push_back(nb));
	throw spanFullException();
}

unsigned int Span::shortestSpan()
{
	if (v.size() < 2)
		throw noSpanFoundException();

	int	shortest = abs(this->v[0] - this->v[1]);

	for (std::vector< int >::iterator i = this->v.begin(); i < this->v.end(); i++)
	{
		for (std::vector< int >::iterator j = i + 1; j < this->v.end(); j++)
		{
			shortest = std::min(shortest, abs(*i - *j));
		}
	}

	return (shortest);
}

unsigned int Span::longestSpan()
{
	if (v.size() < 2)
		throw noSpanFoundException();
	return (*(std::max_element(this->v.begin(), this->v.end())) - *(std::min_element(this->v.begin(), this->v.end())));
}

void Span::addNumbers(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	if ((v.size() + (end - start)) >= nb)
		throw spanFullException();
	this->v.insert(this->v.end(), start, end);
}
