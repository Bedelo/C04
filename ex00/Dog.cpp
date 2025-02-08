/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:17:45 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/04 15:57:03 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): AAnimal(){
	this->type = "Dog";
	std::cout << "Dog Constructor default called" << std::endl;
	return ;
}

Dog::Dog(Dog const & src){
	std::cout << "Dog Copy constructor called" << std::endl;
	*this = src;
	return ; 
}

Dog & Dog::operator=(Dog const & rhs){
	std::cout << "Dog Copy assignment operator called" << std::endl;
	if (this != &rhs){
		this->type = rhs.type;
	}
	return *this;
}

Dog::~Dog(void){
	std::cout << "Dog Destructor called" << std::endl;
	return ;
}

void Dog::makeSound() const{
	std::cout << "The Dog barks: Ouaf Ouaf!" << std::endl;
	return ;
}

std::string Dog::getType() const{
	return this->type;
}