/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 16:50:10 by chaidel           #+#    #+#             */
/*   Updated: 2023/01/25 18:38:45 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Convert.hpp"

		/*	Constructors/Destructor */
Convert::Convert(std::string& str) : _av(str), _double(toDouble()), _int(toInt()), _char(toChar()), _float(toFloat())
{
	if (!isdigit(str[0]) && str.size() == 1)
	{
		this->_int = static_cast<int>(str[0]);
		this->_double = static_cast<double>(str[0]);
		this->_float = static_cast<float>(str[0]);
	}
}

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
	{
		this->_av = obj._av;
		this->_int = obj._int;
		this->_char = obj._char;
		this->_float = obj._float;
		this->_double = obj._double;
	}
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
		if (nums.getStr().compare("0"))
			if (nums.getInt() == std::numeric_limits<int>::infinity() || nums.getInt() == -(std::numeric_limits<int>::infinity())
				|| !nums.getStr().compare("nan")
				|| nums.getDouble() > static_cast<double>(std::numeric_limits<int>::max())
				|| nums.getDouble() < static_cast<double>(std::numeric_limits<int>::min()))
				throw std::string("Impossible");
		flux << nums.getInt() << std::endl;
	}
	catch (std::string& e) {
		flux << e << std::endl;
	}
	double	fract(0);
	double	int_part(0);
	flux << "float: ";
	fract = modf(nums.getFloat(), &int_part);
	if (fract == 0)
	{
		flux.precision(1);
		flux << std::fixed << nums.getFloat() << 'f' << std::endl;
	}
	else
		flux << nums.getFloat() << 'f' << std::endl;
	flux << "double: ";
	fract = modf(nums.getDouble(), &int_part);
	if (fract == 0)
	{
		flux.precision(1);
		flux << std::fixed << nums.getDouble() << std::endl;
	}
	else
		flux << nums.getDouble() << std::endl;	
	return (flux);
}