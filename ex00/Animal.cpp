/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:36:27 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/17 09:54:19 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Animal.hpp"

Animal::Animal(void): type(""){
	std::cout << "Constructor default called" << std::endl;
	return ;
}

Animal::Animal(Animal const & src){
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ; 
}

Animal & Animal::operator=(Animal const & rhs){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs){
		this->type = rhs.type;
	}
	return *this;
}

Animal::~Animal(void){
	std::cout << "Destructor called" << std::endl;
	return ;
}

void Animal::makeSound() const{
	std::cout << "The animal makes its own sound" << std::endl;
}

std::string  Animal::getType() const{
	return this->type;
}