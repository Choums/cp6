/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:05:47 by chaidel           #+#    #+#             */
/*   Updated: 2023/01/16 18:03:23 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstdlib>

class	Base {
	public:
		virtual ~Base() {};
};

class	A : public Base {};

class	B : public Base {};

class	C : public Base {};

Base*	generate(void);
void	identify(Base* p);
void	identify(Base& p);