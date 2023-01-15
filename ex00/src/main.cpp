/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 16:11:33 by chaidel           #+#    #+#             */
/*   Updated: 2023/01/13 18:18:33 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Convert.hpp"

int	main(int ac, char **av)
{
	try {
		if (ac != 2)
			throw std::string("Invalid Number of Argument");
		else if (!av[1])
			throw std::string("Invalid Argument");
		std::string	str(av[1]);
		Convert	num(str);
		std::cout << num;
	}
	catch (std::string&	e) {
		std::cerr << e << std::endl;
		exit(1);
	}
	return (0);
}