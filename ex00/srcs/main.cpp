/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:15:22 by mgagne            #+#    #+#             */
/*   Updated: 2024/09/25 14:57:12 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int	main( void )
{
	std::vector<int> v;

	srand(time(NULL));
	for (int i = 0; i < 10; i++)
	{
		v.push_back(std::rand() % 10);
	}

	std::cout << std::endl;
	std::cout << "index	->	value" << std::endl;

	for (int i = 0; i < 10; i++)
	{
		std::cout << i << "	->	" << v[i] << std::endl;
	}

	std::cout << std::endl;

	try
	{
		::easyfind(v, 7);
		::easyfind(v, -1);
	}
	catch (std::exception &error)
	{ std::cerr << error.what() << std::endl; }

	return (0);
}
