/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <jait-chd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 12:30:26 by jait-chd          #+#    #+#             */
/*   Updated: 2026/01/08 11:52:12 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
	ScavTrap gateKeeper("GateKeeper");
	ScavTrap copy(gateKeeper);

	gateKeeper.attack("intruder");
	gateKeeper.takeDamage(30);
	gateKeeper.beRepaired(20);
	gateKeeper.guardGate();

	for (int i = 0; i < 52; ++i)
		gateKeeper.attack("nothing");

	copy = gateKeeper;
	copy.attack("other intruder");
	copy.guardGate();

	return 0;
}
