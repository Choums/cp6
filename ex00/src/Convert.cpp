/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 16:50:10 by chaidel           #+#    #+#             */
/*   Updated: 2023/01/10 20:37:55 by root             ###   ########.fr       */
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
	if (num == std::numeric_limits<int>::infinity() || num == -(std::numeric_limits<int>::infinity())) //Condition de limits a faire
	{
		throw Impossible();
	}
	else
		return (num);
}

float	Convert::toFloat()
{
	float	num = static_cast<float>(_double);
	// Condition de limits a faire
	if (num == std::numeric_limits<float>::infinity() || num == -(std::numeric_limits<float>::infinity())
		|| std::isnan(num))
		throw Impossible();
	else
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

/*
 *	Condition a ajouter:
 *	Char	=> Non printable, Non Displayable
 *	float et double => affichage des . et/ou du 'f'
 *	Message de limite
*/
std::ostream&	operator<<(std::ostream& flux, Convert const& nums)
{
	flux << "char: " << nums.getChar() << std::endl;
	flux << "int: " << nums.getInt() << std::endl;
	flux << "float: " << nums.getFloat() << std::endl;
	flux << "double: " << nums.getDouble() << std::endl;		
	return (flux);
}