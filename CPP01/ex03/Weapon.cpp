/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <jait-chd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 11:34:17 by jait-chd          #+#    #+#             */
/*   Updated: 2025/12/31 13:52:12 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
Weapon::Weapon(std::string type) : type(type) {}
Weapon::~Weapon(void) {}
const std::string& Weapon::getType(void) const {
    return type; 
}
void Weapon::setType(std::string type) {
    this->type = type;
}
