/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 11:40:41 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/18 14:25:56 by bsunda           ###   ########.fr       */
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
	
	virtual Ice* clone() const;
};

#endif
