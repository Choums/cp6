/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:14:20 by chaidel           #+#    #+#             */
/*   Updated: 2023/01/16 18:30:44 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Base.hpp"

Base*	generate(void)
{
	srand(static_cast<unsigned int>(time(NULL)));
	
	switch ((rand() % 3) + 1)
	{
		case 1:
			std::cout << "Generated A" << std::endl;
			return (new A());
		case 2:
			std::cout << "Generated B" << std::endl;
			return (new B());
		case 3:
			std::cout << "Generated C" << std::endl;
			return (new C());
	}
	return (NULL);
}

/*	Dynamic cast verif du ptr NULL */
void	identify(Base* p)
{
	std::cout << "ptr: ";
	if (dynamic_cast<A*>(p))
		std::cout << "Base type is A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Base type is B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Base type is C" << std::endl;
}

/*	Dynamic cast par ref, recup exception */
void	identify(Base& p)
{
	std::cout << "ref: ";
	try {
		static_cast<void>(dynamic_cast<A&>(p));
		std::cout << "Base type is A" << std::endl;
	}
	catch (std::exception& bc) {}
	try {
		static_cast<void>(dynamic_cast<B&>(p));
		std::cout << "Base type is B" << std::endl;
	}
	catch (std::exception& bc) {}
	try {
		static_cast<void>(dynamic_cast<C&>(p));
		std::cout << "Base type is C" << std::endl;
	}
	catch (std::exception& bc) {}
}