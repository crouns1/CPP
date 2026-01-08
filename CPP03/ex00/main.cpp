/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <jait-chd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 10:21:17 by jait-chd          #+#    #+#             */
/*   Updated: 2026/01/08 11:52:26 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
	ClapTrap a("A");
	ClapTrap b("B");

	a.attack("a wall");
	a.takeDamage(3);
	a.beRepaired(5);

	for (int i = 0; i < 11; ++i)
		b.attack("nothing");

	a.takeDamage(100);
	a.attack("target");
	a.beRepaired(1);

	return 0;
}