/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 08:14:41 by thodavid          #+#    #+#             */
/*   Updated: 2025/12/15 12:47:46 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
public:
    Cat(void);                                //(c) CONSTR
    Cat(Cat const &src);                      //(c) CONSTR by copy
    Cat &operator=(Cat const &rightHandSide); //(c) Copy assignment operator
    ~Cat();                                //(c) destr

    void        makeSound() const;

    private:
        Brain* b;
};

#endif //CAT_HPP
