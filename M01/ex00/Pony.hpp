/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/14 08:48:40 by avan-ber      #+#    #+#                 */
/*   Updated: 2020/10/14 13:01:10 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class Pony
{
	private:
		std::string	_name;
		std::string	_heap_or_stack;

	public:
		void	run_pony(void);
		void	pony_makes_sound(void);
		void	display_pony_info(void);
		Pony(std::string name, std::string _heap_or_stack);
		~Pony(void);
};

#endif
