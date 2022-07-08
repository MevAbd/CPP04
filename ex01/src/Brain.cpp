/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 01:40:46 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/08 02:23:56 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.class.hpp"

Brain::Brain(void)
{
	std::cout << "Brain constructor" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = "idea";
}

Brain::Brain(const Brain &rhs)
{
	std::cout << "Brain copy constructor" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = "idea";
	*this = rhs;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor" << std::endl;
}

Brain	&Brain::operator=(const Brain &rhs)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = rhs._ideas[i];
	return (*this);
}
