/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 22:17:35 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/07 23:05:00 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.class.hpp"

Animal::Animal(void) : _type("Animal")
{
	std::cout << "~~Animal Constructor" << std::endl;
	return ;
}

Animal::Animal(const Animal &rhs) : _type("Animal")
{
	*this = rhs;
	std::cout << "~~Animal Copy Constructor" << std::endl;
	return ;
}

Animal::~Animal(void)
{
	std::cout << "~~Animal Destructor" << std::endl;
	return ;
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal : Brouhaha............" << std::endl;
}

std::string	Animal::getType(void)const
{
	return (this->_type);
}

