/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 22:33:56 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/07 23:10:42 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_CLASS_HPP
# define WRONGCAT_CLASS_HPP
# include "Animal.class.hpp"

class WrongCat : public Animal
{
	private :
				std::string	_type;

	public :
				WrongCat(void);
				WrongCat(const WrongCat &rhs);
				~WrongCat(void);

				void		makeSound(void) const;
				std::string	getType(void) const;	
};

#endif
