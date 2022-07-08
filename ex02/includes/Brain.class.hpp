/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 00:42:43 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/08 05:07:05 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CLASS_HPP
# define BRAIN_CLASS_HPP
# include <iostream>
# include "AAnimal.class.hpp"

class Brain
{
	protected :
				std::string	_ideas[100];
	public :
				Brain(void);
				Brain(const Brain &rhs);
				~Brain(void);
				
				Brain	&operator=(const Brain &rhs);
};

#endif
