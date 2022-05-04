/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 23:39:55 by ldurante          #+#    #+#             */
/*   Updated: 2022/05/05 01:49:42 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Easyfind.hpp"
#include <array>
#include <vector>

int main(void)
{
	std::vector<int> v;
	std::vector<int>::iterator iter;

	v.push_back(23);
	v.push_back(56);
	v.push_back(-12);
	v.push_back(34);
	v.push_back(7);
	
	iter = easyfind(v, -12);

	std::cout << *iter << std::endl;
	return (0);
}