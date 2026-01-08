/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <jait-chd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 10:21:17 by jait-chd          #+#    #+#             */
/*   Updated: 2026/01/08 13:03:34 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {

	{
		ScavTrap gateKeeper("GateKeeper");
		ScavTrap copyGate(gateKeeper);

		gateKeeper.attack("intruder");
		gateKeeper.takeDamage(30);
		gateKeeper.beRepaired(20);
		gateKeeper.guardGate();

		for (int i = 0; i < 52; ++i)
			gateKeeper.attack("nothing");

		copyGate = gateKeeper;
		copyGate.attack("other intruder");
		copyGate.guardGate();
	}

	{
		FragTrap a;
		FragTrap cp(a);
		FragTrap frag("Fraggy");
		FragTrap copy(frag);

		frag.attack("target");
		frag.takeDamage(90);
		frag.beRepaired(40);
		frag.highFivesGuys();

		for (int i = 0; i < 101; ++i)
			frag.attack("nothing");

		copy = frag;
		copy.highFivesGuys();
		copy.attack("other target");
	}
	return 0;
}
