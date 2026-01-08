/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <jait-chd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 10:21:17 by jait-chd          #+#    #+#             */
/*   Updated: 2026/01/08 11:52:48 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
	{
		ScavTrap gate("GateKeeper");
		gate.attack("intruder");
		gate.guardGate();
		gate.takeDamage(40);
		gate.beRepaired(15);
	}

	{
		FragTrap frag("Fraggy");
		FragTrap clone(frag);

		frag.attack("target");
		frag.highFivesGuys();
		frag.takeDamage(110);
		frag.beRepaired(20);

		clone.attack("another target");
		clone.highFivesGuys();
	}
	return 0;
}
