/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <jait-chd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 00:00:00 by jait-chd          #+#    #+#             */
/*   Updated: 2025/12/31 19:52:01 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>

#include "Weapon.hpp"
class HumanB {
	private:
		std::string name;
		Weapon *weapon;

	public:
		HumanB(std::string const &name);
		~HumanB(void);
		void setWeapon(Weapon &weapon);
		void attack(void) const;
};

#endif
