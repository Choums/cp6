/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 16:11:33 by chaidel           #+#    #+#             */
/*   Updated: 2023/01/25 17:58:24 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Convert.hpp"

void	check_arg(int const ac, std::string const& str)
{
	if (ac != 2)
		throw std::string("Invalid Number of Argument");
	else if (str.empty())
		throw std::string("Invalid Argument"); 
}

int	main(int ac, char **av)
{
	try {
		if (!av[1])
			throw std::string("Invalid Argument");
		std::string	str(av[1]);
		check_arg(ac, str);
		Convert	num(str);
		std::cout << num;
	}
	catch (std::string&	e) {
		std::cerr << e << std::endl;
		exit(1);
	}
	return (0);
}