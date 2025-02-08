/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 12:53:36 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/03 14:37:27 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_H
#define WRONG_CAT_H

#include "WrongAnimal.hpp"

class WrongCat: public AWrongAnimal{

public:
	WrongCat(void);
	WrongCat(WrongCat const & src);
	WrongCat & operator=(WrongCat const & rhs);
	~WrongCat(void);
	
	virtual void makeSound() const;
	virtual std::string getType() const;

private:
	std::string type;
};

#endif 