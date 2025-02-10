/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:36:21 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/09 12:22:39 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

class AAnimal{

protected:
	std::string type;

public:
	AAnimal(void);
	AAnimal(AAnimal const & src);
	AAnimal & operator=(AAnimal const & rhs);
	virtual ~AAnimal(void);
	
	virtual std::string getType() const;
	virtual void makeSound() const = 0;
};

#endif