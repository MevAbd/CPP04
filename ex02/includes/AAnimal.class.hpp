/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 22:11:32 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/08 05:06:40 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_CLASS_HPP
# define AANIMAL_CLASS_HPP
# include <iostream>

class AAnimal
{
	protected :
				std::string	_type;

	public :
				AAnimal(void);
				AAnimal(const std::string &type);
				AAnimal(const AAnimal &rhs);
				virtual ~AAnimal(void);

				AAnimal	&operator=(const AAnimal &rhs);

				virtual void	makeSound(void) const = 0;				
				std::string		getType(void) const;
};

#endif
