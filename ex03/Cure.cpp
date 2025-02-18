/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 11:41:48 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/18 15:13:31 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void): AMateria(){
	this->_type = "cure";
	return;
}

Cure::Cure(std::string const & type): AMateria(){
	this->_type = type;
	return ;
}

Cure::Cure(const Cure& src){
	*this = src;
	return ;	
}

Cure& Cure::operator=(const Cure& rhs){
	if (this != &rhs){
		this->_type = rhs._type;
	}
	return *this;
}

Cure::~Cure(){
	return ;
}


Cure* Cure::clone() const{
	return new Cure(*this);
}
