/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:21:22 by mgagne            #+#    #+#             */
/*   Updated: 2024/09/25 15:33:56 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
	#define SPAN_HPP

	#include "Span.h"

	class Span
	{
		private :
			Span();
			unsigned int n;
			std::vector<int> v;

		public :
			~Span();
			Span(unsigned int n);
			Span(Span const &copy);
			Span &operator=(Span const &copy);

			void addNumber(int n);
			unsigned int shortestSpan(void);
			unsigned int longestSpan(void);
			void addNumbers(std::vector<int>::iterator start, std::vector<int>::iterator end);

		//exceptions x2 :
		//	span Full & can't find short/long .est span
	};

#endif
