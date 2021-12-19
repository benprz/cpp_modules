/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 18:36:30 by bperez            #+#    #+#             */
/*   Updated: 2021/12/19 19:06:47 by bperez           ###   ########lyon.fr   */
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
	Animal *animals[4] = { new Dog(), new Dog(), new Cat(), new Cat()};


	Cat	*cat = new Cat();
	cat->setBrain("idea1");

	for (int i = 0; i < 4; i ++)
		delete (animals[i]);
}
/*
int main() {
    const Animal* j = new Dog();
    const Animal* i = new Cat();
delete j;//should not create a leak
    delete i;
}
*/
