/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <jait-chd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 10:21:17 by jait-chd          #+#    #+#             */
/*   Updated: 2026/01/07 07:58:24 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("fraggy") {
	hitPts = 100;
	energyPts = 100;
	attackDmg = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string& Name) : ClapTrap(Name) {
	hitPts = 100;
	energyPts = 100;
	attackDmg = 30;
	std::cout << "FragTrap param constructor called " << name << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
	std::cout << "FragTrap copy constructor called " << name << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
	if (this != &other)
		ClapTrap::operator=(other);
	std::cout << "FragTrap assignment operator called " << name << std::endl;
	return (*this);
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called " << name << std::endl;
}

void FragTrap::attack(const std::string& target) {
	if(hitPts == 0) {
		std::cout << "FragTrap " << name << "cant attack (no hit pts availlable) " << std::endl;
		return ;
	}
	if(energyPts == 0) {
		std::cout << "FragTrap " << name << "cant attack (no energy pts availlable) " << std::endl;
		return ;
	}
	--energyPts;
	std::cout << "FragTrap " << name << " attacks " << target << " causing " << attackDmg << " point of damage" << std::endl;
}

void FragTrap::highFivesGuys() {
	if (hitPts == 0) {
		std::cout << "FragTrap " << name << " cant high five (destroyed)" << std::endl;
		return;
	}
	std::cout << "FragTrap " << name << " requests a positive high five" << std::endl;
}
