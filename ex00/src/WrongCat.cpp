/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 22:35:32 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/07 23:38:32 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.class.hpp"

WrongCat::WrongCat(void) : _type("WrongCat")
{
	std::cout << "~~WrongCat Constructor" << std::endl;
	return ;
}

WrongCat::WrongCat(const WrongCat &rhs) : _type("WrongCat")
{
	*this = rhs;
	std::cout << "~~WrongCat Copy Constructor" << std::endl;
	return ;
}

WrongCat::~WrongCat(void)
{
	std::cout << "~~WrongCat Destructor" << std::endl;
	return ;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat : Miaou... Miaou.. Miaou." << std::endl;
}

std::string	WrongCat::getType(void)const
{
	return (this->_type);
}

WrongCat	&WrongCat::operator=(const WrongCat &rhs)
{
	this->_type = rhs._type;
	return (*this);
}
