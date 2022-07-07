/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 22:35:32 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/08 00:27:40 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.class.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "~~Cat Constructor" << std::endl;
	return ;
}

Cat::Cat(const Cat &rhs) : Animal("Cat")
{
	*this = rhs;
	std::cout << "~~Cat Copy Constructor" << std::endl;
	return ;
}

Cat::~Cat(void)
{
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
	return (*this);
}
