/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:21:22 by mgagne            #+#    #+#             */
/*   Updated: 2024/09/26 22:47:02 by mgagne           ###   ########.fr       */
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
			~MutantStack<T>();
			MutantStack<T>();
			MutantStack<T>(MutantStack<T> const &copy);
			MutantStack<T> &operator=(MutantStack<T> const &copy);
	};

#endif
