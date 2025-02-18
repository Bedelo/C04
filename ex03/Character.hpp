/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 11:35:05 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/18 16:37:13 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character: public ICharacter{

private:
	std::string	_name;
	AMateria	*_items[4];
	
public:
	 Character(void); 
	 Character(std::string name);
	 Character(const Character & src); 
	 Character & operator=(const Character & rhs);
	 ~Character(void);
	 
	 virtual std::string const & getName() const;
	 virtual void equip(AMateria* m);
	 virtual void unequip(int idx);
	 virtual void use(int idx, ICharacter& target);
	
};

#endif

