/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 18:36:30 by bperez            #+#    #+#             */
/*   Updated: 2021/12/20 16:30:56 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

#include <iostream>
#include <string.h>

int main()
{
	Animal *animals[4] = { new Dog(), new Dog(), new Cat(), new Cat()};
	std::string *ideas = new std::string[100];

	ideas[0] = "manon";
	ideas[1] = "benjamin";
	ideas[2] = "anton";
	ideas[3] = "yishun";
	ideas[4] = "milou";
	std::cout << std::endl;

	animals[2]->Cat::addIdea("manon");
	delete[] ideas;

	std::cout << std::endl;
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
