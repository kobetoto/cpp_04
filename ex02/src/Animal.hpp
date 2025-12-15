/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 08:14:15 by thodavid          #+#    #+#             */
/*   Updated: 2025/12/15 14:30:21 by thodavid         ###   ########.fr       */
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

class AAnimal
{
public:
    AAnimal(void);                                   //(c) CONSTR
    AAnimal(AAnimal const &src);                      //(c) CONSTR by copy
    AAnimal &operator=(AAnimal const &rightHandSide); //(c) Copy assignment operator
    virtual ~AAnimal(void);                          //(c) destr

    std::string getType(void) const;
    virtual void makeSound() const = 0;

protected:
    std::string type;
};

#endif // ANIMAL_HPP
