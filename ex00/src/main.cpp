/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 07:54:43 by thodavid          #+#    #+#             */
/*   Updated: 2025/12/15 10:44:04 by thodavid         ###   ########.fr       */
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
    std::cout << std::endl << std::endl ;
    {
        const WrongAnimal meta;
        const WrongAnimal i = WrongCat();
        std::cout << i.getType() << " " << std::endl;
        i.makeSound(); // the WrongCat should output the WrongAnimal sound
        meta.makeSound();
    }
    return (0);
}
