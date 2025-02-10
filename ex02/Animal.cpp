/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:36:27 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/09 12:22:50 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Animal.hpp"

AAnimal::AAnimal(void): type(""){
	std::cout << "Constructor default called" << std::endl;
	return ;
}

AAnimal::AAnimal(AAnimal const & src){
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ; 
}

AAnimal & AAnimal::operator=(AAnimal const & rhs){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs){
		this->type = rhs.type;
	}
	return *this;
}

AAnimal::~AAnimal(void){
	std::cout << "Destructor called" << std::endl;
	return ;
}

// void AAnimal::makeSound() const{
// 	std::cout << "The animal makes its own sound" << std::endl;
// }

std::string  AAnimal::getType() const{
	return this->type;
}