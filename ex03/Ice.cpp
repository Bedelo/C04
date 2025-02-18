/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 11:40:38 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/18 14:25:53 by bsunda           ###   ########.fr       */
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


Ice* Ice::clone() const{
	return new Ice();
}
