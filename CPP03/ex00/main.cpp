/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <jait-chd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 10:21:17 by jait-chd          #+#    #+#             */
/*   Updated: 2026/01/08 11:52:33 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
	ClapTrap alpha("Alpha");
	ClapTrap beta("Beta");

	alpha.attack("a dummy");
	alpha.takeDamage(3);
	alpha.beRepaired(2);

	for (int i = 0; i < 10; ++i)
		alpha.attack("empty space");
	alpha.attack("late target");

	beta.takeDamage(11);
	beta.attack("impossible target");
	beta.beRepaired(5);

	return 0;
}