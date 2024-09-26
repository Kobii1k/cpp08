/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:15:22 by mgagne            #+#    #+#             */
/*   Updated: 2024/09/26 22:42:13 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#define MAX 20000

int	main()
{
	Span s1 = Span(5);
	Span s2 = Span(MAX + 500);

	std::vector<int> v1(1000);
	std::vector<int> v2;

	try
	{
		// int test = rand() % 2147483647;
		std::cout << std::endl;

		s1.addNumber(6);
		s1.addNumber(3);
		s1.addNumber(18);
		s1.addNumber(9);
		s1.addNumber(11);

		std::cout << "s1 shortest : " << s1.shortestSpan() << std::endl;
		std::cout << "s1 longest : " << s1.longestSpan() << std::endl << std::endl;


		for (int i = 0; i < MAX; i++)
			v2.push_back(i);

		s2.addNumbers(v2.begin(), v2.end());

		std::cout << "s2 shortest : " << s2.shortestSpan() << std::endl;
		std::cout << "s2 longest : " << s2.longestSpan() << std::endl << std::endl;
	}
	catch (std::exception &error)
	{ std::cerr << error.what() << std::endl; }

	return (0);
}
