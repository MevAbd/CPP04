/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 22:35:32 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/08 05:05:40 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.class.hpp"

Dog::Dog(void) : AAnimal("Dog")
{
	std::cout << "~~Dog Constructor" << std::endl;
	_brain = new Brain();
	return ;
}

Dog::Dog(const Dog &rhs) : AAnimal("Dog")
{
	std::cout << "~~Dog Copy Constructor" << std::endl;
	*this = rhs;
	_brain = new Brain();
	return ;
}

Dog::~Dog(void)
{
	delete _brain;
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
