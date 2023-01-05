/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 16:11:33 by chaidel           #+#    #+#             */
/*   Updated: 2023/01/05 17:07:46 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*	Exemple:
 *	./convert 0
 *	char: Non displayable
 *	int: 0
 *	float: 0.0f
 *	double: 0.0
*/

/*
 *	class Convert =>	
 *	cas particulier => exceptions (Impossible, non displayable)
 *	
*/

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Invalid Argument" << std::endl;
		exit(1);
	}
	std::cout << "char: " << std::endl;
	// std::cout << "int:" << static_cast<int>(av[1]);
	return (0);
}