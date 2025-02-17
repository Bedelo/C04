/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 11:40:41 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/17 17:16:28 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria{
	
public:
	Ice(void); 
	Ice(std::string const & type);
	
	Ice(const Ice& src); 
	Ice& operator=(const Ice& rhs);
	virtual ~Ice(); 
	
	virtual std::string const & getType() const;
	virtual Ice* clone() const;
	virtual void use(ICharacter& target);
};

#endif
