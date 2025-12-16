/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 10:53:31 by thodavid          #+#    #+#             */
/*   Updated: 2025/12/16 10:58:02 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Brain_HPP
#define Brain_HPP

#include <iostream>
#include <string>

class Brain
{
public:
    Brain(void);                                  //(c) CONSTR
    Brain(Brain const &src);                      //(c) CONSTR by copy
    Brain &operator=(Brain const &rightHandSide); //(c) Copy assignment operator
    ~Brain(void);                                 //(c) destr

    std::string ideas[100];
};

#endif
