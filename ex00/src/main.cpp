/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 22:24:47 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/08 01:36:34 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.class.hpp"
#include "Cat.class.hpp"
#include "WrongAnimal.class.hpp"
#include "WrongCat.class.hpp"

int	main(void)
{
	const Animal	*animal_a = new Animal();
	std::cout << std::endl << std::endl;

	const Animal	animal_b = Animal();
	std::cout << std::endl << std::endl;

	const Animal	animal_c(animal_b);
	std::cout << std::endl << std::endl;

	const Dog		*dog_a = new Dog();
	std::cout << std::endl << std::endl;

	const Dog		dog_b = Dog();
	std::cout << std::endl << std::endl;

	const Dog		dog_c(dog_b);
	std::cout << std::endl << std::endl;

	const Cat		*cat_a = new Cat();
	std::cout << std::endl << std::endl;

	const Cat		cat_b = Cat();
	std::cout << std::endl << std::endl;

	const Cat		cat_c(cat_b);
	std::cout << std::endl << std::endl;

	const WrongAnimal	*WrongAnimal_a = new WrongAnimal();
	std::cout << std::endl << std::endl;

	const WrongAnimal	WrongAnimal_b = WrongAnimal();
	std::cout << std::endl << std::endl;

	const WrongAnimal	WrongAnimal_c(WrongAnimal_b);
	std::cout << std::endl << std::endl;

	const WrongCat		*Wrongcat_a = new WrongCat();
	std::cout << std::endl << std::endl;

	const WrongCat		Wrongcat_b = WrongCat();
	std::cout << std::endl << std::endl;

	const WrongCat		Wrongcat_c(Wrongcat_b);
	std::cout << std::endl << std::endl;

	animal_a->makeSound();
	animal_b.makeSound();
	animal_c.makeSound();
	std::cout << std::endl << std::endl;

	dog_a->makeSound();
	dog_b.makeSound();
	dog_c.makeSound();
	std::cout << std::endl << std::endl;

	cat_a->makeSound();
	cat_b.makeSound();
	cat_c.makeSound();
	std::cout << std::endl << std::endl;

	WrongAnimal_a->makeSound();
	WrongAnimal_b.makeSound();
	WrongAnimal_c.makeSound();
	std::cout << std::endl << std::endl;

	Wrongcat_a->makeSound();
	Wrongcat_b.makeSound();
	Wrongcat_c.makeSound();
	std::cout << std::endl << std::endl;

	std::cout << animal_a->getType() << " : Animal" << std::endl;
	std::cout << dog_a->getType() << " : Dog" << std::endl;
	std::cout << cat_a->getType() << " : Cat" << std::endl;

	delete animal_a;
	std::cout << std::endl << std::endl;
	delete dog_a;
	std::cout << std::endl << std::endl;
	delete cat_a;
	std::cout << std::endl << std::endl;
	delete Wrongcat_a;
	std::cout << std::endl << std::endl;
	delete WrongAnimal_a;
	std::cout << std::endl << std::endl;


	
	const Animal		*dog = new Dog();
	delete dog;



	const Animal * animal_ptr = new Cat();

	animal_ptr->makeSound();
	delete animal_ptr;

	const WrongAnimal * wronganimal_ptr = new WrongCat();

	wronganimal_ptr->makeSound();
	return 0;
}
