/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 08:14:15 by thodavid          #+#    #+#             */
/*   Updated: 2025/12/15 10:28:28 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <string>

/*
Orthodox Canonical Form:
    •Default constructor
    •Copy constructor
    •Copy assignment operator
    •Destructor
*/

class Animal
{
public:
    Animal(void);                                   //(c) CONSTR
    Animal(Animal const &src);                      //(c) CONSTR by copy
    Animal &operator=(Animal const &rightHandSide); //(c) Copy assignment operator
    virtual ~Animal(void);                          //(c) destr

    std::string getType(void) const;
    virtual void makeSound() const;

protected:
    std::string type;
};

#endif // ANIMAL_HPP
