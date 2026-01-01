/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <jait-chd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 10:32:10 by jait-chd          #+#    #+#             */
/*   Updated: 2026/01/01 14:32:25 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>
#include <iostream>

class Zombie
{
	private:
		std::string	name;
	public:
		Zombie(std::string str);
		~Zombie();
		void	announce(void) const;
};

void	randomChump(std::string nameX);
Zombie*	newZombie(std::string nameX);

#endif
