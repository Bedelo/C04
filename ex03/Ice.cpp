/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 11:40:38 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/17 13:05:19 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"


Ice::Ice(void): AMateria(){
	this->_type = "ice";
	return;
}

Ice::Ice(std::string const & type): AMateria(){
	this->_type = type;
	return ;
}

Ice::Ice(const Ice& src){
	*this = src;
	return ;	
}

Ice& Ice::operator=(const Ice& rhs){
	if (this != &rhs){
		this->_type = rhs._type;
	}
	return *this;
}

Ice::~Ice(){
	return ;
}

std::string const & Ice::getType() const{
	return this->_type;	
}

Ice* Ice::clone() const{
	return new Ice();
}

void Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at "<< target.getName() <<" *" << std::endl;
}