/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:21:08 by chaidel           #+#    #+#             */
/*   Updated: 2023/01/16 16:12:23 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serialize.hpp"

/*	uintptr_t remplace le void*, il est plus large */

uintptr_t	serialize(Data* ptr)
{
	uintptr_t var = reinterpret_cast<uintptr_t>(ptr);
	return (var);
}

Data*	deserialize(uintptr_t raw)
{
	Data	*data;
	data = reinterpret_cast<Data*>(raw);
	return (data);
}