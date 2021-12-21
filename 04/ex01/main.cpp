/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 18:36:30 by bperez            #+#    #+#             */
/*   Updated: 2021/12/21 07:22:48 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

#include <iostream>

int main()
{
	Animal *animals[4] = { new Dog(), new Cat(), new Dog(), new Cat()};
	ideas[5] = { "manon", "benjamin", "anton", "aurélie", "milou" };


	

	for (int i = 0; i < 4; i ++)
		delete (animals[i]);
}
