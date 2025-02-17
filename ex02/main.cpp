/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 10:38:32 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/17 16:32:55 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int	main(void){
	
	std::cout << "**** Animals set:" << std::endl;
	std::cout << std::endl;

	int size = 0;
	AAnimal* tab[6];
	
	while (size < 6){
		std::cout << "animal " << size + 1 <<  " :" << std::endl;
		if(size < 3)
			tab[size] = new Dog();
		else
			tab[size] = new Cat();
		std::cout << "My type is " << tab[size]->getType() << std::endl; 
		size++;
		std::cout << std::endl;
	}

	// delete meta;
	int iter = 0;
	while (iter < 6){
		std::cout << "Removing of Animal " << iter + 1 << ":" << std::endl;
		delete tab[iter];
		std::cout << std::endl;		
		iter++;
	}
 }