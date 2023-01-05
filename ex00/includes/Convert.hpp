/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 16:50:35 by chaidel           #+#    #+#             */
/*   Updated: 2023/01/05 17:06:57 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Convert {
	public:
			/*	Constructors/Destructor */
		Convert();
		Convert(Convert const& cpy);
		virtual ~Convert();

			/*	Methods */

			/*	Assignement Operator Overload */
		Convert&	operator=(Convert const& obj);

			/*	Accessors */
		int		getInt() const;
		char	getChar() const;
		float	getFloat() const;
		double	getDouble() const;

	private:
		std::string	const&	_av;
		int	const			_int;
		char const			_char;
		float const			_float;
		double const		_double;
	
	public:
		class Impossible : public std::exception {
			public:
				Impossible() throw();
				virtual ~Impossible() throw();
				virtual const char* what() const throw()
				{return ("Impossible\n");}
		};
		
};