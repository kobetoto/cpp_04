/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 08:14:41 by thodavid          #+#    #+#             */
/*   Updated: 2025/12/15 10:21:00 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat : public Animal
{
public:
    Cat(void);                                //(c) CONSTR
    Cat(Cat const &src);                      //(c) CONSTR by copy
    Cat &operator=(Cat const &rightHandSide); //(c) Copy assignment operator
    ~Cat();                                //(c) destr

    void        makeSound() const;
};

#endif //CAT_HPP
