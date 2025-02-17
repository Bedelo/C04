/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 11:41:31 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/17 12:48:45 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria{

public:
	Cure(void); 
	Cure(std::string const & type);
	
	Cure(const Cure& src); 
	Cure& operator=(const Cure& rhs);
	~Cure(); 
	
	std::string const & getType() const;
	Cure* clone() const;
	void use(ICharacter& target);
};

#endif
