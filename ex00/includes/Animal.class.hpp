/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 22:11:32 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/08 00:18:34 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_HPP
# define ANIMAL_CLASS_HPP
# include <iostream>

class Animal
{
	protected :
				std::string	_type;

	public :
				Animal(void);
				Animal(const std::string &type);
				Animal(const Animal &rhs);
				virtual ~Animal(void);

				Animal	&operator=(const Animal &rhs);

				virtual void	makeSound(void) const;				
				std::string		getType(void) const;
};

#endif
