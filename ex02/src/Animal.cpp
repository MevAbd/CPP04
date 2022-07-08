/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 22:17:35 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/08 05:03:44 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.class.hpp"

AAnimal::AAnimal(void) : _type("AAnimal")
{
	std::cout << "~~AAnimal Constructor" << std::endl;
	return ;
}

AAnimal::AAnimal(const std::string &type) : _type(type)
{
	std::cout << "~~AAnimal Constructor" << std::endl;
	return ;
}

AAnimal::AAnimal(const AAnimal &rhs) : _type("AAnimal")
{
	*this = rhs;
	std::cout << "~~AAnimal Copy Constructor" << std::endl;
	return ;
}

AAnimal::~AAnimal(void)
{
	std::cout << "~~AAnimal Destructor" << std::endl;
	return ;
}

void	AAnimal::makeSound(void) const
{
	std::cout << "AAnimal : Brouhaha............" << std::endl;
}

std::string	AAnimal::getType(void)const
{
	return (this->_type);
}

AAnimal	&AAnimal::operator=(const AAnimal &rhs)
{
	this->_type = rhs._type;
	return (*this);
}
