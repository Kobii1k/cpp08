/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:21:22 by mgagne            #+#    #+#             */
/*   Updated: 2024/09/26 22:33:38 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
	#define SPAN_HPP

	#include "Span.h"

	class Span
	{

		//exceptions x2 :
		//	span Full & can't find short/long .est span
		class spanFullException : public std::exception
		{
			public :
				virtual const char *what() const throw();
		};

		class noSpanFoundException : public std::exception
		{
			public :
				virtual const char *what() const throw();
		};

		private :
			Span();
			unsigned int nb;
			std::vector<int> v;

		public :
			~Span();
			Span(unsigned int nb);
			Span(Span const &copy);
			Span &operator=(Span const &copy);

			void addNumber(int nb);
			unsigned int shortestSpan();
			unsigned int longestSpan();
			void addNumbers(std::vector<int>::iterator start, std::vector<int>::iterator end);
	};

#endif
