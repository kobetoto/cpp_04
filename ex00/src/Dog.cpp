/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 09:55:04 by thodavid          #+#    #+#             */
/*   Updated: 2025/12/15 10:15:23 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
    this->type = "Dog";
    std::cout << "Hello from Dog Constructor" << std::endl;
}

Dog::Dog(Dog const &src)
{
    this->type = src.type;
    std::cout << "Hello from Dog Constructor by copie" << std::endl;
}

Dog &Dog::operator=(Dog const &rightHandSide)
{
    if(this != &rightHandSide)
        this->type = rightHandSide.type;
    return (*this);
}

Dog::~Dog(void)
{
    std::cout << "Hello from Dog Destructor" << std::endl;
}
void Dog::makeSound() const
{
    std::cout << "~~OUAF~~" << std::endl;
}
