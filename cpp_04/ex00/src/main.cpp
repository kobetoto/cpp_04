/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 07:54:43 by thodavid          #+#    #+#             */
/*   Updated: 2025/12/16 10:46:05 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); // will output the cat sound!
    j->makeSound();
    meta->makeSound();

    /* "..." */

    delete (meta);
    delete (j);
    delete (i);

    /***************************/

    const WrongAnimal *wrong_animal = new WrongAnimal();
    const WrongAnimal *wrong_cat = new WrongCat();
    wrong_cat->makeSound(); // the WrongCat should output the WrongAnimal sound
    wrong_animal->makeSound();
    delete wrong_animal;
    delete wrong_cat;

    return (0);
}
