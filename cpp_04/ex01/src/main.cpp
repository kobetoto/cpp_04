/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 07:54:43 by thodavid          #+#    #+#             */
/*   Updated: 2025/12/16 11:01:13 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    delete j; // should not create a leak
    delete i;

    std::cout << std::endl
              << std::endl;
    // create and fill an array of Animal objects
    Animal *arr[10];
    for (int y = 0; y < 5; y++)
        arr[y] = new Dog();
    for (int y = 5; y < 10; y++)
        arr[y] = new Cat();
    for (int y = 0; y < 10; y++)
        delete (arr[y]);

    std::cout << std::endl
              << std::endl;

    {
        Dog d1;
        d1.getBrain()->ideas[0] = "bone";
        Dog d2(d1);
        d1.getBrain()->ideas[0] = "changed";

        std::cout << d2.getBrain()->ideas[0] << std::endl;
    }
    return (0);
}
