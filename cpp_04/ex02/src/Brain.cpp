/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 10:53:35 by thodavid          #+#    #+#             */
/*   Updated: 2025/12/15 13:12:15 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Hello from Brain Constructor" << std::endl;
}

Brain::Brain(Brain const &src)
{
    int i = 0;
    while (i < 100){
        this->ideas[i] = src.ideas[i];
        i++;
    }
    std::cout << "Hello from Brain Constructor by copy" << std::endl;
}

Brain &Brain::operator=(Brain const &rightHandSide)
{
    if (this != &rightHandSide)
    {
        int i = 0;
        while (i < 100){
            this->ideas[i] = rightHandSide.ideas[i];
            i++;
        }
    }
    return (*this);
}
Brain::~Brain(void)
{
    std::cout << "Hello from Brain Destructor" << std::endl;
}
