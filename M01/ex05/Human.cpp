/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/14 19:11:18 by avan-ber      #+#    #+#                 */
/*   Updated: 2020/10/15 09:26:41 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Brain*	Human::identify()
{
	return this->_brain.identify();
}

void	Human::setBrain(Brain brain)
{
	this->_brain = brain;
}

Brain&	Human::getBrain()
{
	return this->_brain;
}

Human::Human(void)
{
	std::cout << "Human Constructor called" << std::endl;
	return ;
}

Human::~Human(void)
{
	std::cout << "Human Destructor called" << std::endl;
	return ;
}
