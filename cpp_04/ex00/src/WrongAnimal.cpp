/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 10:27:40 by thodavid          #+#    #+#             */
/*   Updated: 2025/12/15 10:40:35 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("WrongAnimal")
{
    std::cout << "Hello from WrongAnimal Constructor" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src) : type(src.type)
{
    std::cout << "Hello from WrongAnimal Constructor by copy" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "Hello from WrongAnimal Destructor" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rightHandSide)
{
    if (this != &rightHandSide)
        this->type = rightHandSide.type;
    return (*this);
}

void WrongAnimal::makeSound() const{
    std::cout << "~~I AM AN WrongANIMAL~~" << std::endl;
}

std::string WrongAnimal::getType( void ) const{
    return (type);
}
