/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 11:07:33 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/17 12:52:17 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

	
AMateria::AMateria(void){
	return ;
}

AMateria::AMateria(std::string const & type){
	this->_type = type;
	return ;	
}

AMateria::AMateria(const AMateria& src){
	*this = src;
	return ;
}

AMateria & AMateria::operator=(const AMateria& rhs){
	if(this != &rhs){
		this->_type = rhs._type;
	}
	return *this;
}

AMateria::~AMateria(){
	return ;
} 

std::string const & AMateria::getType() const{
	return this->_type;
}

void AMateria::use(ICharacter& target){
	std::cout << "Default behaviour of use method !!" << std::endl;
}