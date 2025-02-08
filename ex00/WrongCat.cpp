/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:44:30 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/03 14:38:41 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void): type("WrongCat"){
	std::cout << "WrongCat Constructor default called" << std::endl;
	return ;
}

WrongCat::WrongCat(WrongCat const & src){
	std::cout << "WrongCat Copy constructor called" << std::endl;
	*this = src;
	return ; 
}

WrongCat & WrongCat::operator=(WrongCat const & rhs){
	std::cout << "WrongCat Copy assignment operator called" << std::endl;
	if (this != &rhs){
		this->type = rhs.type;
	}
	return *this;
}

WrongCat::~WrongCat(void){
	std::cout << "WrongCat Destructor called" << std::endl;
	return ;
}

void WrongCat::makeSound() const{
	std::cout << "The WrongCat false meows: WEOM WEOM!" << std::endl;
	return ;
}

std::string WrongCat::getType() const{
	return this->type;
}