/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 13:34:30 by ldurante          #+#    #+#             */
/*   Updated: 2022/06/23 10:35:31 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : m_size(N)
{

}

Span::Span(Span const &toCopy)
{
	*this = toCopy;
}

Span &Span::operator = (Span const &toCopy)
{
	this->m_vector = toCopy.getVector();
	this->m_size = toCopy.getSize();
	return *this;
}

unsigned int Span::getSize(void) const
{
	return (this->m_size);
}

std::vector<int> Span::getVector(void) const
{
	return (this->m_vector);
}

void Span::addNumber(int n)
{
	if (m_vector.size() >= m_size)
		throw SpanFull();
	m_vector.push_back(n);
}

void	Span::addRange(std::vector<int>::iterator begin,
		std::vector<int>::iterator end)
{
	unsigned int		spaceLeft;
	std::vector<int>	tmp(begin, end);

	spaceLeft = m_size - (int)m_vector.size();
	if (tmp.size() > spaceLeft)
		throw NotEnoughSpace();
	copy(tmp.begin(), tmp.end(), std::back_inserter(this->m_vector));
}

int Span::shortestSpan(void)
{
	int min;
	int minIndex;
	int secondMin;

	if (m_size <= 1 || m_vector.size() <= 1)
		throw NoSpan();
	min = *std::min_element(m_vector.begin(), m_vector.end());
	minIndex = std::min_element(m_vector.begin(), m_vector.end()) - m_vector.begin();
	m_vector[minIndex] = INT_MAX;
	secondMin = *std::min_element(m_vector.begin(), m_vector.end());
	m_vector[minIndex] = min;
	return (secondMin - min);
}

int Span::longestSpan(void)
{
	int min;
	int max;

	if (m_size <= 1 || m_vector.size() <= 1)
		throw NoSpan();
	min = *std::min_element(m_vector.begin(), m_vector.end());
	max = *std::max_element(m_vector.begin(), m_vector.end());
	return (max - min);
}

const char *Span::SpanFull::what() const throw()
{
	return ("Error: can't add more numbers");
}

const char *Span::NoSpan::what() const throw()
{
	return ("Error: there's not enough numbers to find span");
}

const char *Span::NotEnoughSpace::what() const throw()
{
	return ("Error: there's not enough space for the range");
}

Span::~Span(void)
{

}
