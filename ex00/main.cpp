/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 23:39:55 by ldurante          #+#    #+#             */
/*   Updated: 2022/06/01 22:24:04 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Easyfind.hpp"
#include <array>
#include <vector>
#include <list>

template <typename T>
void test(T &container, int n)
{
	if (easyfind(container, n))
		std::cout << "The number " << n << " is in the container" << std::endl;
	else
		std::cout << "The number " << n << " is not in the container" << std::endl;
}

int main(void)
{
	std::vector<int> v;

	for (int i = 0; i < 100; i++)
		v.push_back(i * 2);
	
	std::cout << "------ TEST VECTOR ------" << std::endl;
	test(v, 32);
	test(v, 48);
	test(v, -42);

	std::cout << "------ TEST LIST ------" << std::endl;
	
	std::list<int>	l;

	for (int i = 0; i < 100; i++)
		l.push_back(i * 2);
	
	test(l, 32);
	test(l, 48);
	test(l, -42);
	
	return (0);
}
