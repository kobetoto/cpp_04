/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 10:34:19 by thodavid          #+#    #+#             */
/*   Updated: 2025/12/15 10:36:15 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
    WrongCat(void);                                     //(c) CONSTR
    WrongCat(WrongCat const &src);                      //(c) CONSTR by copy
    WrongCat &operator=(WrongCat const &rightHandSide); //(c) Copy assignment operator
    ~WrongCat();                                        //(c) destr

    void makeSound() const;
};

#endif // WRONGCAT_HPP
