/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:36:27 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/17 09:55:46 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): type("Wrong Animal"){
	std::cout << "Wrong animal Constructor default called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src){
	std::cout << "Wrong animal Copy constructor called" << std::endl;
	*this = src;
	return ; 
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs){
	std::cout << "Wrong animal Copy assignment operator called" << std::endl;
	if (this != &rhs){
		this->type = rhs.type;
	}
	return *this;
}

WrongAnimal::~WrongAnimal(void){
	std::cout << "Wrong animal Destructor called" << std::endl;
	return ;
}

void WrongAnimal::makeSound() const{
	std::cout << "The wrong animal makes its wrong sound, it is not a animal sound" << std::endl;
}

std::string  WrongAnimal::getType() const{
	return this->type;
}