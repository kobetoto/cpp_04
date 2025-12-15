/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 08:19:49 by thodavid          #+#    #+#             */
/*   Updated: 2025/12/15 12:48:00 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
public:
    Dog(void);                                //(c) CONSTR
    Dog(Dog const &src);                      //(c) CONSTR by copy
    Dog &operator=(Dog const &rightHandSide); //(c) Copy assignment operator
    ~Dog(void);                               //(c) destr

    void makeSound() const;
private:
    Brain *b;
};

#endif // DOG_HPP
