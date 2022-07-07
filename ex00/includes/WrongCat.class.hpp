/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 22:33:56 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/08 00:39:16 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_CLASS_HPP
# define WRONGCAT_CLASS_HPP
# include "WrongAnimal.class.hpp"

class WrongCat : public WrongAnimal
{
	public :
				WrongCat(void);
				WrongCat(const WrongCat &rhs);
				~WrongCat(void);

				WrongCat	&operator=(const WrongCat &rhs);

				void		makeSound(void) const;
};

#endif
