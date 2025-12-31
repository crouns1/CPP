/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Humans.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <jait-chd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 11:28:50 by jait-chd          #+#    #+#             */
/*   Updated: 2025/12/31 13:52:05 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Humans.hpp"


HumanA::HumanA(std::string name_x, Weapon& weapon_x) : name(name_x), weapon(weapon_x) {}
HumanA::~HumanA(void) {}
void HumanA::attack(void) {
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

HumanB::HumanB(std::string name) : name(name), weapon(NULL) {}
HumanB::~HumanB(void) {}
void HumanB::setWeapon(Weapon& weapon_x) {
    weapon = &weapon_x;
}
void HumanB::attack(void) {
    if (weapon)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    else
        std::cout << name << " has no weapon to attack with!" << std::endl;
}
