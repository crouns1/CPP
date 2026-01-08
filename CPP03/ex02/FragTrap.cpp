/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <jait-chd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 10:21:17 by jait-chd          #+#    #+#             */
/*   Updated: 2026/01/08 12:01:19 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("fraggy") {
	setHitPts(100);
	setEnergyPts(100);
	setAttackDmg(30);
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string& Name) : ClapTrap(Name) {
	setHitPts(100);
	setEnergyPts(100);
	setAttackDmg(30);
	std::cout << "FragTrap param constructor called " << getName() << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
	std::cout << "FragTrap copy constructor called " << getName() << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
	if (this != &other)
		ClapTrap::operator=(other);
	std::cout << "FragTrap assignment operator called " << getName() << std::endl;
	return (*this);
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called " << getName() << std::endl;
}

void FragTrap::attack(const std::string& target) {
	if(getHitPts() == 0) {
		std::cout << "FragTrap " << getName() << "cant attack (no hit pts availlable) " << std::endl;
		return ;
	}
	if(getEnergyPts() == 0) {
		std::cout << "FragTrap " << getName() << "cant attack (no energy pts availlable) " << std::endl;
		return ;
	}
	setEnergyPts(getEnergyPts() - 1);
	std::cout << "FragTrap " << getName() << " attacks " << target << " causing " << getAttackDmg() << " point of damage" << std::endl;
}

void FragTrap::highFivesGuys() {
	if (getHitPts() == 0) {
		std::cout << "FragTrap " << getName() << " cant high five (destroyed)" << std::endl;
		return;
	}
	std::cout << "FragTrap " << getName() << " requests a positive high five" << std::endl;
}
