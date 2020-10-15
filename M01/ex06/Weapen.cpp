/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapen.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 10:31:24 by avan-ber      #+#    #+#                 */
/*   Updated: 2020/10/15 11:56:58 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

void		Weapon::setType(std::string type)
{
	this->_type = type;
}

std::string&		Weapon::getType()
{
	return(this->_type);
}

Weapon::Weapon(std::string weapon) : _type(weapon)
{
	std::cout << "Weapon Constructor called" << std::endl;
	return ;
}

Weapon::~Weapon(void)
{
	std::cout << "Weapon Destructor called" << std::endl;
	return ;
}
