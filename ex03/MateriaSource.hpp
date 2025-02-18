/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 16:09:58 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/18 11:31:46 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_HPP
#define MATERIA_SOURCE_HPP


#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource{

private:
	std::string _type;
	std::string _name;
	AMateria	*_items[4];
	
public:
	MateriaSource(void);
	MateriaSource(MateriaSource const & src); 
	MateriaSource operator=(MateriaSource const & rhs); 
	virtual ~MateriaSource();
	
	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const & type);
};

#endif