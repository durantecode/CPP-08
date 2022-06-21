/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 23:45:58 by ldurante          #+#    #+#             */
/*   Updated: 2022/06/21 16:12:49 by ldurante         ###   ########.fr       */
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
