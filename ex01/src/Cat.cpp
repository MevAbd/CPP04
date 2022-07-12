/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 22:35:32 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/08 03:42:41 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.class.hpp"
#include "Brain.class.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "~~Cat Constructor" << std::endl;
	_brain = new Brain();
	return ;
}

Cat::Cat(const Cat &rhs) : Animal("Cat")
{
	std::cout << "~~Cat Copy Constructor" << std::endl;
	*this = rhs;
	return ;
}

Cat::~Cat(void)
{
	delete _brain;
	std::cout << "~~Cat Destructor" << std::endl;
	return ;
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat : Miaou... Miaou.. Miaou." << std::endl;
}

Cat	&Cat::operator=(const Cat &rhs)
{
	this->_type = rhs._type;
	if (this->_brain)
		delete _brain;
	_brain = new Brain(*rhs._brain);
	return (*this);
}
