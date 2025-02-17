/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:36:21 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/17 09:55:37 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_H
#define WRONG_ANIMAL_H

#include <iostream>
#include <string>

class WrongAnimal{

protected:
	std::string type;

public:
	WrongAnimal(void);
	WrongAnimal(WrongAnimal const & src);
	WrongAnimal & operator=(WrongAnimal const & rhs);
	virtual ~WrongAnimal(void);
	
	virtual void makeSound() const;
	virtual std::string getType() const;
};

#endif