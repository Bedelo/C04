/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:44:30 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/08 10:55:54 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): _type("Cat"){
	std::cout << "Cat Constructor default called" << std::endl;
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
	}
	return *this;
}

Cat::~Cat(void){
	std::cout << "Cat Destructor called" << std::endl;
	delete _myBrain;
	return ;
}

void Cat::makeSound() const{
	std::cout << "The Cat meows: MEOW MEOW!" << std::endl;
	return ;
}

std::string Cat::getType() const{
	return this->_type;
}