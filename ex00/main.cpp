/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:40:10 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/17 09:58:24 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(){
	
	std::cout << "**** Animal set:" << std::endl;
	const Animal* meta = new Animal();
	meta->makeSound();
	std::cout << std::endl;
	
	std::cout << "**** Dog set:" << std::endl;
	const Animal* j = new Dog();
	std::cout << j->getType() << " " << std::endl;
	j->makeSound();
	std::cout << std::endl;
	
	std::cout << "**** Cat set:" << std::endl;
	const Animal* i = new Cat();
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	std::cout << std::endl;
		
	std::cout << "**** Wrong Animal set:" << std::endl;
	const WrongAnimal* wrongAnimal = new WrongAnimal();
	std::cout << wrongAnimal->getType() << " " << std::endl;
	wrongAnimal->makeSound();
	std::cout << std::endl;
	

	std::cout << "**** Wrong Cat set:" << std::endl;
	const WrongAnimal* wrongCat = new WrongCat();
	std::cout << wrongCat->getType() << " " << std::endl;
	wrongCat->makeSound();
	std::cout << std::endl;


	delete i;
	delete j;
	delete meta;
	delete wrongAnimal;
	delete wrongCat;
	
	return 0;
}