/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 23:45:58 by ldurante          #+#    #+#             */
/*   Updated: 2022/05/05 12:47:47 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template <typename T>
bool easyfind(T &container, const int toFind)
{
	typename T::iterator iter;

	iter = std::find(container.begin(), container.end(), toFind);
	if (iter == container.end())
		return (false);
	return (true);
}

#endif