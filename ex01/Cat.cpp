/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:44:30 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/18 15:57:52 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): Animal(){
	std::cout << "Cat Constructor default called" << std::endl;
	this->_type = "Cat";
	_myBrain = new Brain();
	return ;
}

Cat::Cat(Cat const & src){
	std::cout << "Cat Copy constructor called" << std::endl;
	*this = src;
	return ; 
}

Cat & Cat::operator=(Cat const & rhs){
	std::cout << "Cat Copy assignment operator called" << std::endl;
	if (this != &rhs){
		this->_type = rhs._type;
		this->_myBrain = rhs._myBrain;
	}
	return *this;
}

Cat::~Cat(void){
	std::cout << "Cat Destructor called" << std::endl;
	delete this->_myBrain;
	return ;
}

void Cat::makeSound() const{
	std::cout << "The Cat meows: MEOW MEOW!" << std::endl;
	return ;
}

