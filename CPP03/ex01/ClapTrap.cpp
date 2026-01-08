/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <jait-chd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 12:31:57 by jait-chd          #+#    #+#             */
/*   Updated: 2026/01/08 11:52:07 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("crouns") , hitPts(10) , energyPts(10), attackDmg(0) {
	std::cout << "clap trap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& Name) : name(Name) , hitPts(10) , energyPts(10), attackDmg(0) {
	std::cout << "clap trap param constructor called " <<  name  << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : name(other.name) , hitPts(other.hitPts) , energyPts(other.energyPts), attackDmg(other.attackDmg) {
	std::cout << "Clap trap copy constructor called " << name << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	if(this != &other) {
		name = other.name;
		hitPts = other.hitPts;
		energyPts = other.energyPts;
		attackDmg = other.attackDmg;
	}
	std::cout << "clap trap assignment operator called " << name << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "clap trap destructor called " << name << std::endl; 
}

void ClapTrap::attack(const std::string& target) {
	if(hitPts == 0) {
		std::cout << "clap trap " << name << "cant attack (no hit pts availlable) " << std::endl;
		return ;
	}
	if(energyPts == 0) {
		std::cout << "clap trap " << name << "cant attack (no energy pts availlable) " << std::endl;
		return ;
	}
	--energyPts;
	std::cout << "clap trap " << name << " attacks " << target << " causing " << attackDmg << " point of damage" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if(hitPts == 0) {
		std::cout << "clap trap " << name << " is already destroyed" << std::endl;
		return ;
	}
	if(amount >= hitPts) hitPts = 0;
	else hitPts -= amount;
	std::cout << "clap trap " << name << " takes " << amount << " points of damage" << std::endl; 
}

void ClapTrap::beRepaired(unsigned int amount) {
	if(hitPts == 0) {
		std::cout << "clap trap " << name << " cant repair (no hit pts still availlable)" << std::endl;
		return;
	}
	if(energyPts == 0) {
		std::cout << "clap trap " << name << " cant repair (no enery pts still availlable)" << std::endl;
		return;
	}
	--energyPts;
	hitPts += amount;
	std::cout << "clap trap " << name << " repairs itself , regaining " << amount << " hit pts " << std::endl;
}
