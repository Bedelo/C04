/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:17:45 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/18 16:30:11 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal(){
	std::cout << "Dog Constructor default called" << std::endl;
	this->_type = "Dog";
	_myBrain = new Brain();
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
		this->_type = rhs._type;
		this->_myBrain = rhs._myBrain;
	}
	return *this;
}

Dog::~Dog(void){
	std::cout << "Dog Destructor called" << std::endl;
	delete this->_myBrain;
	return ;
}

void Dog::makeSound() const{
	std::cout << "The Dog barks: Ouaf Ouaf!" << std::endl;
	return ;
}

