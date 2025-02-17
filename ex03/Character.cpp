/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 11:37:38 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/17 16:08:17 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name):ICharacter(){
	this->_name = name;
	for (int i = 0; i <4 ; i++){
		this->_items[i] = NULL;
	}
	return ; 
}

Character::Character(Character const & src){
	*this = src;
	for(int i = 0; i < 4 ; i++){
		delete this->_items[i];
	}
	return ;
}

Character & Character::operator=(Character const & rhs){
	if (this != &rhs){
		this->_name = rhs._name;
		for (int i = 0; i < 4 ; i++){
			this->_items[i] = NULL;
		}
	}
}

Character::~Character(void){
	for(int i = 0; i <4 ; i++){
		delete this->_items[i];
	}
	return ;
}

std::string const & Character::getName() const{
	return this->_name;
}

void Character::equip(AMateria* m){
	for(int i = 0; i < 4 ; i++){
		if (this->_items[i] == nullptr);
			this->_items[i] = m;
	}
	return ;
}

void Character::unequip(int idx){
	AMateria* toTrash;
	toTrash = (this->_items[idx]);
	this->_items[idx] == NULL;
	delete toTrash;	
}

void Character::use(int idx, ICharacter& target){
	(*(this->_items[idx])).use(target);
	return ;  
	
}