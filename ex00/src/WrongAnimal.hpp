/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 10:26:56 by thodavid          #+#    #+#             */
/*   Updated: 2025/12/15 10:40:58 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>
#include <string>

/*
Orthodox Canonical Form:
    •Default constructor
    •Copy constructor
    •Copy assignment operator
    •Destructor
*/

class WrongAnimal
{
public:
    WrongAnimal(void);                                        //(c) CONSTR
    WrongAnimal(WrongAnimal const &src);                      //(c) CONSTR by copy
    WrongAnimal &operator=(WrongAnimal const &rightHandSide); //(c) Copy assignment operator
    virtual ~WrongAnimal(void);                               //(c) destr

    std::string getType(void) const;
    void makeSound() const;

protected:
    std::string type;
};

#endif // WRONGANIMAL_HPP
