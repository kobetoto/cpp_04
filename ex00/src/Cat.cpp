/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 08:51:52 by thodavid          #+#    #+#             */
/*   Updated: 2025/12/15 10:15:13 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
    this->type = "Cat";
    std::cout << "Hello from Cat Constructor" << std::endl;
}

Cat::Cat(Cat const &src)
{
    this->type = src.type;
    std::cout << "Hello from Cat Constructor by copie" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Hello from Cat Destructor by copie" << std::endl;
}

Cat &Cat::operator=(Cat const &rightHandSide){
    if (this != &rightHandSide)
        this->type = rightHandSide.type;
    return(*this);
}

void    Cat::makeSound() const{
    std::cout << "~~MIAOU~~" << std::endl;
}
