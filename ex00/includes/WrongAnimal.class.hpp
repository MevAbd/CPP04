/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 23:07:58 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/08 00:34:56 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_CLASS_HPP
# define WRONGANIMAL_CLASS_HPP
# include <iostream>

class WrongAnimal
{
	protected :
				std::string	_type;

	public :
				WrongAnimal(void);
				WrongAnimal(const std::string &type);
				WrongAnimal(const WrongAnimal &rhs);
				virtual ~WrongAnimal(void);
				WrongAnimal	&operator=(const WrongAnimal &rhs);

				void		makeSound(void) const;				
				std::string	getType(void) const;
};

#endif
