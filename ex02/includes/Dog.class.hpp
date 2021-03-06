/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 22:33:56 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/12 16:49:40 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP
# include "AAnimal.class.hpp"
# include "Brain.class.hpp"

class Dog : public AAnimal
{
	private :
				Brain	*_brain;
	public :
				Dog(void);
				Dog(const Dog &rhs);
				~Dog(void);

				Dog	&operator=(const Dog &rhs);

				void	makeSound(void) const;				
};

#endif
