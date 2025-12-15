/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 08:08:54 by thodavid          #+#    #+#             */
/*   Updated: 2025/12/15 14:32:19 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal(void)
{
    std::cout << "Hello from AAnimal Constructor" << std::endl;
}

AAnimal::AAnimal(AAnimal const &src) : type(src.type)
{
    std::cout << "Hello from Animal Constructor by copy" << std::endl;
}

AAnimal::~AAnimal(void)
{
    std::cout << "Hello from Animal Destructor" << std::endl;
}

AAnimal &AAnimal::operator=(AAnimal const &rightHandSide)
{
    if (this != &rightHandSide)
        this->type = rightHandSide.type;
    return (*this);
}

// void AAnimal::makeSound() const{
//     std::cout << "~~I AM AN ANIMAL~~" << std::endl;
// }

std::string AAnimal::getType( void ) const{
    return (type);
}
