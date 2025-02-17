/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 12:53:36 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/17 10:45:10 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal{

public:
	Cat(void);
	Cat(Cat const & src);
	Cat & operator=(Cat const & rhs);
	~Cat(void);
	
	virtual void makeSound() const;
	virtual std::string getType() const;

private:
	Brain		*_myBrain;
};

#endif 