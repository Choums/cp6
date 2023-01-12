/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 16:50:35 by chaidel           #+#    #+#             */
/*   Updated: 2023/01/12 18:16:09 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <limits>
#include <cmath>
#include <string>
#include <cctype>

class Convert {
	public:
			/*	Constructors/Destructor */
		Convert(std::string &str);
		Convert(Convert const& cpy);
		virtual ~Convert();

			/*	Methods */
		int			toInt();
		char		toChar();
		float		toFloat();
		double		toDouble();
		
			/*	Assignement Operator Overload */
		Convert&	operator=(Convert const& obj);

			/*	Accessors */
		int		getInt() const;
		char	getChar() const;
		float	getFloat() const;
		double	getDouble() const;
		std::string	getStr() const;

	private:
		std::string&	_av;
		double 			_double;
		int				_int;
		char 			_char;
		float 			_float;
	
	public:
		class Impossible : public std::exception {
			public:
				Impossible() throw();
				virtual ~Impossible() throw();
				virtual const char* what() const throw()
				{	return ("Impossible\n"); }
		};
		
};

std::ostream&	operator<<(std::ostream& flux, Convert const& nums);