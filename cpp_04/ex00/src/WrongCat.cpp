/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 10:34:14 by thodavid          #+#    #+#             */
/*   Updated: 2025/12/16 10:51:05 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    this->type = "WrongCat";
    std::cout << "Hello from WrongCat Constructor" << std::endl;
}

WrongCat::WrongCat(WrongCat const &src)
{
    this->type = src.type;
    std::cout << "Hello from WrongCat Constructor by copie" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Hello from WrongCat Destructor" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &rightHandSide){
    if (this != &rightHandSide)
        this->type = rightHandSide.type;
    return(*this);
}

void    WrongCat::makeSound() const{
    std::cout << "~~UOAIM (wrong cat)~~" << std::endl;
}
