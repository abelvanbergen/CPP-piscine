/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: abelfranciscusvanbergen <abelfranciscus      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/12 21:17:46 by abelfrancis   #+#    #+#                 */
/*   Updated: 2020/10/12 21:31:53 by abelfrancis   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	if(ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for(int j = 1; j < ac; j++)
		{
			for(int i = 0; av[j][i] != '\0'; i++)
			{
				if(av[j][i] >= 'a' && av[j][i] <= 'z')
					av[j][i] -= 32;
			}
			std::cout << av[j];
		}
	}
	std::cout << std::endl;
}