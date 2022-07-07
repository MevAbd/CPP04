/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 22:33:56 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/08 00:19:02 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_HPP
# define CAT_CLASS_HPP
# include "Animal.class.hpp"

class Cat : public Animal
{
	public :
				Cat(void);
				Cat(const Cat &rhs);
				~Cat(void);

				Cat	&operator=(const Cat &rhs);

				void		makeSound(void) const;
};

#endif
