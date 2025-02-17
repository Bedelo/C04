/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:36:27 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/17 15:35:05 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./AAnimal.hpp"

AAnimal::AAnimal(void): _type(""){
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
		this->_type = rhs._type;
	}
	return *this;
}

AAnimal::~AAnimal(void){
	std::cout << "Destructor called" << std::endl;
	return ;
}

std::string  AAnimal::getType() const{
	return this->_type;
}