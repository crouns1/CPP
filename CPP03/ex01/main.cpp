/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <jait-chd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 10:21:25 by jait-chd          #+#    #+#             */
/*   Updated: 2026/01/05 10:21:25 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	std::cout << "--- ClapTrap tests ---" << std::endl;
	ClapTrap c("Clappy");
	c.attack("target");
	c.takeDamage(5);
	c.beRepaired(3);

	std::cout << "\n--- ScavTrap tests (chaining) ---" << std::endl;
	{
		ScavTrap s("Scavy");
		s.attack("intruder");
		s.takeDamage(42);
		s.beRepaired(10);
		s.guardGate();
	}

	return 0;
}
