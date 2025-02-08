/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:36:21 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/04 16:10:00 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_H
#define WRONG_ANIMAL_H

#include <iostream>
#include <string>

class AWrongAnimal{

protected:
	std::string type;

public:
	AWrongAnimal(void);
	AWrongAnimal(AWrongAnimal const & src);
	AWrongAnimal & operator=(AWrongAnimal const & rhs);
	virtual ~AWrongAnimal(void);
	
	virtual void makeSound() const;
	virtual std::string getType() const;
};

#endif