/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <jait-chd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 12:35:12 by jait-chd          #+#    #+#             */
/*   Updated: 2026/01/08 12:08:56 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
protected:
	std::string  name;
	unsigned int hitPts;
	unsigned int energyPts;
	unsigned int attackDmg;

	const std::string& getName() const;
	unsigned int getHitPts() const;
	unsigned int getEnergyPts() const;
	unsigned int getAttackDmg() const;
	void setName(const std::string& n);
	void setHitPts(unsigned int v);
	void setEnergyPts(unsigned int v);
	void setAttackDmg(unsigned int v);

public:
	ClapTrap();
	ClapTrap(const std::string& name);
	ClapTrap(const ClapTrap& other);
	ClapTrap& operator=(const ClapTrap& other);
	~ClapTrap();

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
