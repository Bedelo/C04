/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 12:53:39 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/17 11:26:20 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal{

public:
	Dog(void);
	Dog(Dog const & src);
	Dog & operator=(Dog const & rhs);
	virtual ~Dog(void);
	
	virtual void makeSound() const;
	virtual std::string getType() const;

private:
	Brain		*_myBrain;
};

#endif 