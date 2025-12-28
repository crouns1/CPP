/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <jait-chd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 10:32:10 by jait-chd          #+#    #+#             */
/*   Updated: 2025/12/28 17:43:40 by jait-chd         ###   ########.fr       */
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
		void	announce(void)const;

};

Zombie	*newZombie(std::string nameX);
void	randomChump(std::string nameX);

#endif
