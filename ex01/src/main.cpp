/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <chaidel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 17:52:01 by chaidel           #+#    #+#             */
/*   Updated: 2023/01/16 16:47:42 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serialize.hpp"

int	main(void)
{
	Data		data;
	uintptr_t	ptr;
	Data		*dat;

	data.name = "Structure";
	data.value = 546;
	std::cout << "name: " << data.name << " | " << "value: " << data.value << std::endl;
	std::cout << "--- serialize ---" << std::endl;
	ptr = serialize(&data);
	std::cout << "adress data: " << &data << " | ptr: " << ptr << std::endl;
	std::cout << "--- deserialize ---" << std::endl;
	dat = deserialize(ptr);	
	std::cout << "adress dat: " << &dat << std::endl;
	std::cout << "name: " << dat->name << " | " << "value: " << dat->value << std::endl;
	return (0);
}