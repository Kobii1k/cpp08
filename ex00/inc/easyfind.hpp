/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgagne <mgagne@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:04:14 by mgagne            #+#    #+#             */
/*   Updated: 2024/09/30 20:30:06 by mgagne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
	#define EASYFIND_HPP

	#include "easyfind.h"

	class NotFoundException : public std::exception
	{
		public :
			virtual const char*	what() const throw();
	};

	const char*	NotFoundException::what() const throw()
	{ return ("error: Couldn't find the number in this container"); }

	template<typename T>
	void	easyfind(T arr, int toFind)
	{
		typename T::const_iterator	it;

		it = std::find(arr.begin(), arr.end(), toFind);
		if (it == arr.end())
			throw NotFoundException();
		std::cout << toFind << " : Match found!" << std::endl;
		return ;
	}

#endif
