/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:36:21 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/17 11:25:52 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_ANIMAL_H
#define A_ANIMAL_H

#include <iostream>
#include <string>

class AAnimal{

protected:
	std::string _type;

public:
	AAnimal(void);
	AAnimal(AAnimal const & src);
	AAnimal & operator=(AAnimal const & rhs);
	virtual ~AAnimal(void);
	
	virtual std::string getType() const;
	virtual void makeSound() const = 0;
};

#endif