/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <jait-chd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 13:12:14 by jait-chd          #+#    #+#             */
/*   Updated: 2025/12/31 13:24:00 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie::Zombie(std::string s) : name(s)
{
	std::cout << name << " : created successfuly" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << name << " :  died successfully" << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << name << ": ...BraiiiiiiinnnzzzZ...\n" << std::endl;
}