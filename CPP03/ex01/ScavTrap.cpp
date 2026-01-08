/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <jait-chd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 12:22:33 by jait-chd          #+#    #+#             */
/*   Updated: 2026/01/08 12:01:17 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("scavvy") {
	setHitPts(100);
	setEnergyPts(50);
	setAttackDmg(20);
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string& Name) : ClapTrap(Name) {
	setHitPts(100);
	setEnergyPts(50);
	setAttackDmg(20);
	std::cout << "ScavTrap param constructor called " << getName() << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
	std::cout << "ScavTrap copy constructor called " << getName() << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
	if (this != &other)
		ClapTrap::operator=(other);
	std::cout << "ScavTrap assignment operator called " << getName() << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called " << getName() << std::endl;
}

void ScavTrap::attack(const std::string& target) {
	if(getHitPts() == 0) {
		std::cout << "ScavTrap " << getName() << "cant attack (no hit pts availlable) " << std::endl;
		return ;
	}
	if(getEnergyPts() == 0) {
		std::cout << "ScavTrap " << getName() << "cant attack (no energy pts availlable) " << std::endl;
		return ;
	}
	setEnergyPts(getEnergyPts() - 1);
	std::cout << "ScavTrap " << getName() << " attacks " << target << " causing " << getAttackDmg() << " point of damage" << std::endl;
}

void ScavTrap::guardGate() {
	if (getHitPts() == 0) {
		std::cout << "ScavTrap " << getName() << " cant guard (destroyed)" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode" << std::endl;
}
