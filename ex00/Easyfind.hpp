/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 23:45:58 by ldurante          #+#    #+#             */
/*   Updated: 2022/05/05 01:49:53 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T &container, const int toFind)
{
	typename T::iterator result;

	result = std::find(container.begin(), container.end(), toFind);
	if (result == container.end())
		return (container.end());
	return result;
}

#endif