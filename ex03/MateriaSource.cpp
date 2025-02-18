/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 16:09:55 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/18 15:26:46 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource():IMateriaSource(){
	for (int i = 0; i <4 ; i++){
		this->_items[i] = NULL;
	}
	return ; 
}

MateriaSource::MateriaSource(MateriaSource const & src){
	*this = src;
	return ;
}

MateriaSource MateriaSource::operator=(MateriaSource const & rhs){
	if (this != &rhs){
		for (int i = 0; i < 4; i++){
			delete this->_items[i];
			this->_items[i] = rhs._items[i]->clone();
		}
	}
	return *this;
}

MateriaSource::~MateriaSource(){
	return ;
}


void MateriaSource::learnMateria(AMateria* src){
	if (!src)
		return ;
	for (int i = 0; i < 4 ; i++){
		if (this->_items[i] == NULL){
			this->_items[i] = src;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type){
	for (int i = 3; i >= 0; i--){
		if (this->_items[i] && this->_items[i]->getType() == type)
			return this->_items[i];
	}
	return NULL;
}