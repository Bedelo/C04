/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:04:08 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/17 10:32:05 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>
#include <string>

# define NB_BRAIN 100

class Brain{

public:
	Brain(void);
	Brain (Brain const & src);
	Brain & operator=(Brain const & rhs);
	~Brain(void);

private:
	std::string	_ideas[100];
};

#endif