/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 23:45:58 by ldurante          #+#    #+#             */
/*   Updated: 2022/06/23 13:40:10 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>

/* The typename keyword is used in templates, where without it the compiler
doesn't know that it's a type name instead of member data.

Find returns an iterator to the first element in the range that compares equal to val.
If no elements match, the function returns last. */


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
