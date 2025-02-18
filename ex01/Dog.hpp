/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 12:53:39 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/18 16:30:18 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal{

public:
	Dog(void);
	Dog(Dog const & src);
	Dog & operator=(Dog const & rhs);
	virtual ~Dog(void);
	
	virtual void makeSound() const;

private:
	Brain		*_myBrain;
};

#endif 