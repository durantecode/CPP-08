/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 13:00:27 by ldurante          #+#    #+#             */
/*   Updated: 2022/06/21 18:14:50 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	{		
		std::cout << "Try with 5 numbers and get Span:" << std::endl;
		
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(17);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(11);
		
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		std::cout << "-------------------------------\n" << std::endl;
		std::cout << "Try to add more numbers to throw exception:" << std::endl;
		try
		{
			sp.addNumber(56);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
		std::cout << "-------------------------------\n" << std::endl;
	{
		std::cout << "Try with 1000 numbers and get Span:" << std::endl;
		Span sp2 = Span(1000);
		for (int i = 0; i < 1000; i++)
    		sp2.addNumber(rand()%1000000);
		
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;
	}
		std::cout << "-------------------------------\n" << std::endl;
	{
		std::cout << "Try with 100000 numbers and get Span:" << std::endl;
		Span sp3 = Span(100000);
		for (int i = 0; i < 100000; i++)
    		sp3.addNumber(rand()%1000000);
		
		std::cout << sp3.shortestSpan() << std::endl;
		std::cout << sp3.longestSpan() << std::endl;
	}
		std::cout << "-------------------------------\n" << std::endl;
	{
		std::cout << "Try with no elements to throw exceptions:" << std::endl;
		Span sp4 = Span(5);

		try
		{
			std::cout << sp4.shortestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << "-------------------------------\n" << std::endl;
		std::cout << "Try with 1 element to throw exceptions:" << std::endl;
		sp4.addNumber(42);
		try
		{
			std::cout << sp4.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
		std::cout << "-------------------------------\n" << std::endl;
	{
		std::cout << "Try to add range of elements:" << std::endl;
		Span sp5(100);

		sp5.addRange(324, 410);
		std::cout << sp5.shortestSpan() << std::endl;
		std::cout << sp5.longestSpan() << std::endl;

		std::cout << "-------------------------------\n" << std::endl;
		std::cout << "Try to add bigger range than space:" << std::endl;
		try
		{
			sp5.addRange(20, 60);	
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			sp5.addRange(5, 2);	
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}	
	}	
	return (0);
}
