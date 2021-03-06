/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 22:35:32 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/08 00:27:22 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.class.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "~~Dog Constructor" << std::endl;
	return ;
}

Dog::Dog(const Dog &rhs) : Animal("Dog")
{
	*this = rhs;
	std::cout << "~~Dog Copy Constructor" << std::endl;
	return ;
}

Dog::~Dog(void)
{
	std::cout << "~~Dog Destructor" << std::endl;
	return ;
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog : Woaff... Woaff.. Woaff." << std::endl;
}

Dog	&Dog::operator=(const Dog &rhs)
{
	this->_type = rhs._type;
	return (*this);
}
