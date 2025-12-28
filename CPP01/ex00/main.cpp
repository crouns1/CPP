/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <jait-chd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 10:34:42 by jait-chd          #+#    #+#             */
/*   Updated: 2025/12/28 17:43:44 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie(std::string s) : name(s)
{
	std::cout << "Hello i am about to launch an all out attack on your house. Sincerely, " << name << "\n" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << name << " stepped on a Potato Mine and died.\n"  << std::endl;
}


void	Zombie::announce(void) const
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n" << std::endl;
}


Zombie *newZombie(std::string name)
{
	Zombie *buckethead_zombie = new Zombie(name);
	buckethead_zombie->announce();
	return (buckethead_zombie);
}


void randomChump(std::string name)
{
	Zombie basic_zombie(name);
	basic_zombie.announce();
}

int	main(void)
{
	Zombie *zombie = newZombie("Buckethead Zombie");
	randomChump("Basic Zombie");
	delete zombie;
	return 0;
}
