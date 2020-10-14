/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/14 13:00:03 by avan-ber      #+#    #+#                 */
/*   Updated: 2020/10/14 15:46:48 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

class ZombieEvent
{
	private:
		std::string	_type;

	public:
		Zombie* randomChump();
		Zombie* newZombie(std::string name);
		void	setZombieType(std::string type);
		ZombieEvent(void);
		~ZombieEvent(void);
};

#endif
