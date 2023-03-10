/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 17:51:34 by chaidel           #+#    #+#             */
/*   Updated: 2023/01/16 14:26:46 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<iostream>
#include<stdint.h>

typedef	struct	Data {
	std::string	name;
	int	value;
} Data;

uintptr_t	serialize(Data *ptr);
Data*		deserialize(uintptr_t raw);