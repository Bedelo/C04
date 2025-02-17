/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 11:07:30 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/17 12:47:25 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_MATERIA_HPP
#define A_MATERIA_HPP

#include "ICharacter.hpp"
#include <string>
#include <iostream>

class AMateria{
	
protected:
	std::string _type;

public:
	AMateria(std::string const & type);
	
	AMateria(void); 
	AMateria(const AMateria& src); 
	AMateria& operator=(const AMateria& rhs);
	virtual ~AMateria(); 
	
	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);

};

#endif