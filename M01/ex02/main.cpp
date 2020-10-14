/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/14 13:14:50 by avan-ber      #+#    #+#                 */
/*   Updated: 2020/10/14 17:22:19 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void)
{
	srand (time(NULL));

	ZombieEvent	ZombieEvent;
	Zombie		*a;
	Zombie		*b;

	ZombieEvent.setZombieType("walker");
	a = ZombieEvent.newZombie("Abel");
	a->announce();
	b = ZombieEvent.randomChump();
	delete b;
	b = ZombieEvent.randomChump();
	delete b;
	ZombieEvent.setZombieType("Angry");
	b = ZombieEvent.randomChump();
	delete b;
	ZombieEvent.setZombieType("screamer");
	b = ZombieEvent.randomChump();
	a->announce();
	delete b;
	ZombieEvent.setZombieType("creaper");
	b = ZombieEvent.randomChump();
	delete b;
	delete a;
	return (0);
}
