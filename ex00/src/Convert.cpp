/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 16:50:10 by chaidel           #+#    #+#             */
/*   Updated: 2023/01/09 19:53:27 by root             ###   ########.fr       */
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

int	Convert::toInt()
{
	int	num = static_cast<int>(_double);
	// if (num == std::) Condition de limits a faire
	return (num);
}

float	Convert::toFloat()
{
	float	num = static_cast<float>(_double);
	// Condition de limits a faire
	return (num);
}

double	Convert::toDouble()
{
	try {
		double	num = std::stod(_av);
		return (num);
	}
	catch (std::exception& except)
	{	throw Impossible(); }
}


Convert::Impossible::Impossible() throw() {}
Convert::Impossible::~Impossible() throw() {}

std::ostream&	operator<<(std::ostream& flux, Convert const& nums)
{
	return (flux);
}