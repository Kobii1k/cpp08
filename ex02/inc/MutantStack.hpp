/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:21:22 by mgagne            #+#    #+#             */
/*   Updated: 2024/09/27 00:01:54 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
	#define MUTANTSTACK_HPP

	#include "MutantStack.h"

	template<typename T>
	class MutantStack : public std::stack<T>
	{
		private :

		public :
			MutantStack<T>() {}
			~MutantStack<T>() {}
			MutantStack<T>(MutantStack<T> const &copy) {*this = copy;}
			MutantStack<T> &operator=(MutantStack<T> const &copy) {	if (*this != copy) { this->c = copy->c; return (*this); } }

			typedef typename std::stack<T>::container_type::iterator iterator;
			typedef typename std::stack<T>::container_type ::const_iterator const_iterator;

			iterator begin() { return (this->c.begin()); }
			iterator end() { return (this->c.end()); }

			const_iterator begin() const { return (this->c.begin()); }
			const_iterator end() const { return (this->c.end()); }
	};

#endif
