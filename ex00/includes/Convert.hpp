/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 16:50:35 by chaidel           #+#    #+#             */
/*   Updated: 2023/01/09 19:15:36 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <limits>

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

	private:
		std::string const&		_av;
		int	const				_int;
		char const				_char;
		float const				_float;
		double const			_double;
	
	public:
		class Impossible : public std::exception {
			public:
				Impossible() throw();
				virtual ~Impossible() throw();
				virtual const char* what() const throw()
				{return ("Impossible\n");}
		};
		
};

std::ostream&	operator<<(std::ostream& flux, Convert const& nums);