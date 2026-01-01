/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <jait-chd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 07:29:32 by jait-chd          #+#    #+#             */
/*   Updated: 2025/12/31 19:51:43 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombiecrowd.hpp"

void Zombie::announce(void) {
    std::cout << namex << " : Braiiiiinnnzzzz..." << std::endl;
}

void Zombie::setTheName(std::string name) {
    namex = name;
}

