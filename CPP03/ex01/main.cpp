/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <jait-chd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 12:30:26 by jait-chd          #+#    #+#             */
/*   Updated: 2026/01/08 11:52:38 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
	ScavTrap sentinel("Sentinel");
	ScavTrap backup(sentinel);

	sentinel.attack("intruder");
	sentinel.takeDamage(25);
	sentinel.beRepaired(10);
	sentinel.guardGate();

	for (int i = 0; i < 3; ++i)
		sentinel.attack("empty space");

	backup.attack("backup intruder");
	backup.guardGate();

	return 0;
}
