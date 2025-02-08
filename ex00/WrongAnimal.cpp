/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:36:27 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/03 14:42:03 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./WrongAnimal.hpp"

AWrongAnimal::AWrongAnimal(void): type("Wrong Animal"){
	std::cout << "Wrong animal Constructor default called" << std::endl;
	return ;
}

AWrongAnimal::AWrongAnimal(AWrongAnimal const & src){
	std::cout << "Wrong animal Copy constructor called" << std::endl;
	*this = src;
	return ; 
}

AWrongAnimal & AWrongAnimal::operator=(AWrongAnimal const & rhs){
	std::cout << "Wrong animal Copy assignment operator called" << std::endl;
	if (this != &rhs){
		this->type = rhs.type;
	}
	return *this;
}

AWrongAnimal::~AWrongAnimal(void){
	std::cout << "Wrong animal Destructor called" << std::endl;
	return ;
}

void AWrongAnimal::makeSound() const{
	std::cout << "The wrong animal makes its wrong sound, it is not a animal sound" << std::endl;
}

std::string  AWrongAnimal::getType() const{
	return this->type;
}