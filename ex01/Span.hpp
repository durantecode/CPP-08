/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 13:34:16 by ldurante          #+#    #+#             */
/*   Updated: 2022/06/23 10:38:10 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <array>
#include <limits>

class Span
{
	private:
		std::vector<int> m_vector;
		unsigned int m_size;
		Span(void);

	public:
		Span(unsigned int N);
		Span(Span const &toCopy);
		~Span(void);
		Span &operator = (Span const &toCopy);

		std::vector<int> getVector(void) const;
		unsigned int getSize(void) const;
		void addNumber(int n);
		void addRange(std::vector<int>::iterator begin,
						std::vector<int>::iterator end);
		int shortestSpan(void);
		int longestSpan(void);

		class SpanFull : public std::exception
		{
			public:
				const char* what() const throw();
		};
		
		class NoSpan : public std::exception
		{
			public:
				const char* what() const throw();
		};

		class NotEnoughSpace : public std::exception
		{
			public:
				const char* what() const throw();
		};
		
};

#endif
