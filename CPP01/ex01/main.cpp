/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <jait-chd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 07:33:52 by jait-chd          #+#    #+#             */
/*   Updated: 2025/12/31 19:58:13 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombiecrowd.hpp"

int main()
{
    Zombie *crowd = zombieHorde(HORDE_SIZE , "Zius");
    for(int i = 0; i < HORDE_SIZE ; i++) {
        crowd[i].announce();
    }
    delete[] crowd;
    return 0;
}