/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <jait-chd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 12:22:33 by jait-chd          #+#    #+#             */
/*   Updated: 2026/01/07 07:58:16 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("scavvy") {
	hitPts = 100;
	energyPts = 50;
	attackDmg = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string& Name) : ClapTrap(Name) {
	hitPts = 100;
	energyPts = 50;
	attackDmg = 20;
	std::cout << "ScavTrap param constructor called " << name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
	std::cout << "ScavTrap copy constructor called " << name << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
	if (this != &other)
		ClapTrap::operator=(other);
	std::cout << "ScavTrap assignment operator called " << name << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called " << name << std::endl;
}

void ScavTrap::attack(const std::string& target) {
	if(hitPts == 0) {
		std::cout << "ScavTrap " << name << "cant attack (no hit pts availlable) " << std::endl;
		return ;
	}
	if(energyPts == 0) {
		std::cout << "ScavTrap " << name << "cant attack (no energy pts availlable) " << std::endl;
		return ;
	}
	--energyPts;
	std::cout << "ScavTrap " << name << " attacks " << target << " causing " << attackDmg << " point of damage" << std::endl;
}

void ScavTrap::guardGate() {
	if (hitPts == 0) {
		std::cout << "ScavTrap " << name << " cant guard (destroyed)" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << name << " is now in Gate keeper mode" << std::endl;
}
