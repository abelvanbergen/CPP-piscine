/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/14 19:15:10 by avan-ber      #+#    #+#                 */
/*   Updated: 2020/10/15 09:17:32 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"

Brain*	Brain::identify()
{
	return this;
}

Brain::Brain(void)
{
	std::cout << "Brain Constructor called" << std::endl;
	return ;
}

Brain::~Brain(void)
{
	std::cout << "Brain Destructor called" << std::endl;
	return ;
}
