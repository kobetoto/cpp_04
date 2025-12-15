/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 08:08:54 by thodavid          #+#    #+#             */
/*   Updated: 2025/12/15 10:15:08 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : type("Animal")
{
    std::cout << "Hello from Animal Constructor" << std::endl;
}

Animal::Animal(Animal const &src) : type(src.type)
{
    std::cout << "Hello from Animal Constructor by copy" << std::endl;
}

Animal::~Animal(void)
{
    std::cout << "Hello from Animal Destructor" << std::endl;
}

Animal &Animal::operator=(Animal const &rightHandSide)
{
    if (this != &rightHandSide)
        this->type = rightHandSide.type;
    return (*this);
}

void Animal::makeSound() const{
    std::cout << "~~I AM AN ANIMAL~~" << std::endl;
}

std::string Animal::getType( void ) const{
    return (type);
}
