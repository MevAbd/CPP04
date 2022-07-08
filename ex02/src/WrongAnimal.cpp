/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 22:17:35 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/08 00:33:28 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.class.hpp"

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal")
{
	std::cout << "~~WrongAnimal Constructor" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const std::string &type) : _type(type)
{
	std::cout << "~~WrongAnimal Constructor" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &rhs) : _type("WrongAnimal")
{
	*this = rhs;
	std::cout << "~~WrongAnimal Copy Constructor" << std::endl;
	return ;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "~~WrongAnimal Destructor" << std::endl;
	return ;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal : Brouhaha............" << std::endl;
}

std::string	WrongAnimal::getType(void)const
{
	return (this->_type);
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &rhs)
{
	this->_type = rhs._type;
	return (*this);
}
