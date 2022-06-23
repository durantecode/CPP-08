/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 19:11:54 by ldurante          #+#    #+#             */
/*   Updated: 2022/06/23 13:17:42 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <iterator>
#include <deque>
#include <list>
#include <string>

template <typename T>
class MutantStack : public std::stack<T>
{
	private:

	public:
		typedef typename std::deque<T>::iterator iterator;

		MutantStack(void);
		MutantStack(MutantStack const &toCopy);
		~MutantStack(void);
		MutantStack &operator = (MutantStack const &toCopy);
		
		iterator begin() { return this->c.begin(); };
		iterator end() { return this->c.end(); };
};

template <typename T>
MutantStack<T>::MutantStack(void)
{

}

template <typename T>
MutantStack<T>::MutantStack(MutantStack const &toCopy)
{
	*this = toCopy;
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator = (MutantStack const &toCopy)
{
	this->c = toCopy.c;
	return *this;
}

template <typename T>
MutantStack<T>::~MutantStack(void)
{

}

#endif
