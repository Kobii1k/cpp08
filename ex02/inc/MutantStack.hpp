/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:21:22 by mgagne            #+#    #+#             */
/*   Updated: 2024/09/26 22:41:44 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
	#define MUTANTSTACK_HPP

	#include "MutantStack.h"

	class MutantStack
	{
		// class Exception : public std::exception
		// {
		// 	public :
		// 		virtual const char *what() const throw();
		// };

		private :

		public :
			~Span();
			Span();
			Span(unsigned int nb);
			Span(Span const &copy);
			Span &operator=(Span const &copy);
	};

#endif
