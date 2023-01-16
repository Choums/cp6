/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:13:38 by chaidel           #+#    #+#             */
/*   Updated: 2023/01/16 18:26:56 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Base.hpp"

int main(void)
{
	Base	*truc = generate();
	Base&	ref = *truc;
	
	identify(truc);
	identify(ref);

	delete truc;
	return (0);
}