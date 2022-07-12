/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 22:35:32 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/12 16:49:49 by malbrand         ###   ########.fr       */
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
	if (this->_brain)
		delete this->_brain;
	this->_brain = new Brain(*rhs._brain);
	return (*this);
}
