/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 22:33:56 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/08 02:00:29 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_HPP
# define CAT_CLASS_HPP
# include "Animal.class.hpp"
# include "Brain.class.hpp"

class Cat : public Animal
{
	private :
				Brain	*_brain;
	public :
				Cat(void);
				Cat(const Cat &rhs);
				~Cat(void);

				Cat	&operator=(const Cat &rhs);

				void		makeSound(void) const;
};

#endif
