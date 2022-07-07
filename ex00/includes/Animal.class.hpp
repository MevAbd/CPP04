/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 22:11:32 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/07 23:06:08 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_HPP
# define ANIMAL_CLASS_HPP
# include <iostream>

class Animal
{
	private :
				std::string	_type;

	public :
				Animal(void);
				Animal(const Animal &rhs);
				~Animal(void);

				void		makeSound(void) const;				
				std::string	getType(void) const;
};

#endif
