/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 23:07:58 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/07 23:08:52 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_CLASS_HPP
# define WRONGANIMAL_CLASS_HPP
# include <iostream>

class WrongAnimal
{
	private :
				std::string	_type;

	public :
				WrongAnimal(void);
				WrongAnimal(const WrongAnimal &rhs);
				~WrongAnimal(void);

				void		makeSound(void) const;				
				std::string	getType(void) const;
};

#endif
