/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 16:50:10 by chaidel           #+#    #+#             */
/*   Updated: 2023/01/09 19:34:36 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Convert.hpp"

Convert::Convert(std::string& str) : _av(str), _double(toDouble()), _int(toInt()), _char(toChar()), _float(toFloat())
{}

Convert::Convert(Convert const& cpy)
{
	(void)cpy;
	// this->_av = cpy._av;
}

Convert::~Convert()
{}

		/*	Methods */

// int	Convert::toInt()
// {
// 	int	num = static_cast<int>
// }

// float	Convert::toFloat()
// {
	
// }

double	Convert::toDouble()
{
	try {
		double	num = std::stod(_av);
		return (num);
	}
	catch (std::exception& except)
	{
		
	}
	
}
