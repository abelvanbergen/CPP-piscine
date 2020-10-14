/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex01.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/14 11:04:11 by avan-ber      #+#    #+#                 */
/*   Updated: 2020/10/14 11:08:40 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void memoryLeak()
{
	std::string*        panther = new std::string("String panther");
	std::cout << *panther << std::endl;
	delete panther;
}

int main(void)
{
	memoryLeak();
	system("leaks a.out");
}
