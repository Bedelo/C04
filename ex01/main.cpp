/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 10:38:32 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/17 10:07:16 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int	main(void){
	
	
	std::cout << "**** Animal set:" << std::endl;
	const Animal* meta = new Animal();
	meta->makeSound();
	std::cout << std::endl;

	int size = 0;
	Animal* tab[6];
	
	while (size < 6){
		std::cout << "animal " << size + 1 <<  " :" << std::endl;
		if(size < 3)
			tab[size] = new Dog();
		else
			tab[size] = new Cat();
		size++;
		std::cout << std::endl;
	}
	

	delete meta;
	int iter = 0;
	while (iter < 6){
		std::cout << "Removing of Animal " << iter << ":" << std::endl;
		delete tab[iter];
		std::cout << std::endl;		
		iter++;
	}
 }