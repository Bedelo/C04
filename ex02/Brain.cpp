/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:08:17 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/08 10:45:44 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void){
	std::cout << "Brain constructor called" <<std::endl;
	return ;
}

Brain::Brain (Brain const & src){
	std::cout << "Brain copy called" <<std::endl;
	int i = 0;
	while(i < NB_BRAIN){
		this->_ideas[i] = src._ideas[i];
		i++;
	}
	return ;
}

Brain & Brain::operator=(Brain const & rhs){
	std::cout << "Brain copy assignment operator called" << std::endl;
	int i = 0;
	if (this != &rhs){
		while(i < NB_BRAIN){
			this->_ideas[i] = rhs._ideas[i];
			i++;
		}
	}
	return *this;
}

Brain::~Brain(void){
	std::cout << "Brain destructor called" <<std::endl;
	return ;
}