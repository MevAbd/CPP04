/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 22:24:47 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/08 03:40:14 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.class.hpp"
#include "Cat.class.hpp"
#include "WrongAnimal.class.hpp"
#include "WrongCat.class.hpp"
#include "Brain.class.hpp"
#include "Animal.class.hpp"

int	main(void)
{
	const Animal	animal("fish");
	std::cout<< std::endl;
	const Dog		dog = Dog();
	std::cout<< std::endl;
	const Cat		cat  = Cat();
	std::cout<< std::endl;
	const Brain		brain = Brain();
	std::cout<< std::endl;

	Animal	*array[10];
	std::cout<< std::endl;
	for (int i = 0; i < 5; i++)
		array[i] = new Dog();
	std::cout<< std::endl;
	for (int i = 5; i < 10; i++)
		array[i] = new Cat();
	std::cout<< std::endl;
	for (int i = 0; i < 10; i++)
		delete array[i];
	std::cout<< std::endl;
	return 0;
}
