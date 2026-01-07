/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <jait-chd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 10:21:17 by jait-chd          #+#    #+#             */
/*   Updated: 2026/01/07 07:58:29 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main() {
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

	return 0;
}
