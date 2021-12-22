/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperez <bperez@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 18:36:30 by bperez            #+#    #+#             */
/*   Updated: 2021/12/22 15:07:44 by bperez           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include <iostream>

int main()
{
	std::string ideas1[100] = { "manon", "benjamin", "anton", "aurélie", "milou" };
	std::string ideas2[100] = { "nonam", "nimajneb", "notna", "eilérua", "uolim" };
	Animal *animals[4] = {new Dog(), new Dog, new Cat()};

	Dog	*d1 = (Dog *)animals[0];
	Cat	*c1 = (Cat *)animals[2];

	d1->setBrain(ideas1);
	Dog	*d2 = (Dog *)animals[1];
	*d2 = *d1;
	std::string	*dogIdeas = d1->getBrain()->getIdeas();

	std::cout << std::endl;
	for (int i = 0; dogIdeas[i] != ""; i++)
		std::cout << "Dog1 Ideas " << i << " : " << dogIdeas[i] << std::endl;

	dogIdeas = d2->getBrain()->getIdeas();

	std::cout << std::endl;
	for (int i = 0; dogIdeas[i] != ""; i++)
		std::cout << "Dog2 Ideas " << i << " : " << dogIdeas[i] << std::endl;

	printf("%p %p\n", d1, d2);

	c1->setBrain(ideas2);
	animals[3] = new Cat(*c1);
	Cat	*c2 = (Cat *)animals[3];

	std::string	*catIdeas = c1->getBrain()->getIdeas();

	std::cout << std::endl;
	for (int i = 0; catIdeas[i] != ""; i++)
		std::cout << "Cat1 Ideas " << i << " : " << catIdeas[i] << std::endl;

	catIdeas = c2->getBrain()->getIdeas();

	std::cout << std::endl;
	for (int i = 0; catIdeas[i] != ""; i++)
		std::cout << "Cat2 Ideas " << i << " : " << catIdeas[i] << std::endl;

	printf("%p %p\n", c1, c2);

	std::cout << std::endl;
	for (int i = 0; i < 4; i ++)
		delete (animals[i]);

	// test du sujet
	const Animal* j = new Dog();
    const Animal* i = new Cat();
delete j;//should not create a leak
    delete i;
}
