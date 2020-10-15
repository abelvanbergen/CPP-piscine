/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/14 19:08:50 by avan-ber      #+#    #+#                 */
/*   Updated: 2020/10/15 09:26:15 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include <iostream>
#include "Brain.hpp"

class Human
{
	private:
		Brain	_brain;

	public:
	Brain*	identify();

	void	setBrain(Brain brain);

	Brain&	getBrain();

	Human(void);
	~Human(void);
};

#endif
