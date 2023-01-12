/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 16:50:10 by chaidel           #+#    #+#             */
/*   Updated: 2023/01/12 19:23:51 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Convert.hpp"

		/*	Constructors/Destructor */
Convert::Convert(std::string& str) : _av(str), _double(toDouble()), _int(toInt()), _char(toChar()), _float(toFloat())
{}

Convert::Convert(Convert const& cpy) : _av(cpy._av), _double(cpy._double), _int(cpy._int), _char(cpy._char), _float(cpy._float)
{}

Convert::~Convert()
{}

		/*	Methods */
int	Convert::toInt()
{
	char	*end_ptr;
	int		num = static_cast<int>(strtol(this->_av.c_str(), &end_ptr, 10));
	return (num);
}

char	Convert::toChar()
{
	char	c;
	if (this->_av.size() == 1 && !isdigit(this->_av[0]))
		c = static_cast<char>(this->_av[0]);
	else
		c = static_cast<char>(this->_int);
	return (c);
}

float	Convert::toFloat()
{
	float	num = static_cast<float>(_double);
	return (num);
}

double	Convert::toDouble()
{
		char	*end_ptr;
		double	num = static_cast<double>(strtod(_av.c_str(), &end_ptr));
		return (num);
}

	/*	Assignement Operator Overload */
Convert&	Convert::operator=(Convert const& obj)
{	
	if (this != &obj)
		return (*this);
	return (*this);
}

		/*	Accessors */
int	Convert::getInt() const
{
	return (this->_int);
}

char	Convert::getChar() const
{
	return (this->_char);
}

float	Convert::getFloat() const
{
	return (this->_float);
}

double	Convert::getDouble() const
{
	return (this->_double);
}

std::string	Convert::getStr() const
{
	return (this->_av);
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
	flux << "char: ";
	try {
		if (nums.getStr().size() > 1 && !std::isdigit(nums.getStr()[0]))
			throw std::string("Impossible");
		else if (!isprint(nums.getChar()))
			throw std::string("Non Displayable");
		flux << nums.getChar() << std::endl;
	}
	catch (std::string& e) {
		flux << e << std::endl;
	}
	flux << "int: ";
	try {
		if (nums.getInt() == std::numeric_limits<int>::infinity() || nums.getInt() == -(std::numeric_limits<int>::infinity()) || std::isnan(nums.getInt()))
			throw std::string("Impossible");
		flux << nums.getInt() << std::endl;
		
	}
	catch (std::string& e) {
		flux << e << std::endl;
	}
	flux << "float: " << nums.getFloat() << std::endl;
	flux << "double: " << nums.getDouble() << std::endl;		
	return (flux);
}