/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombiecrowd.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <jait-chd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 07:29:16 by jait-chd          #+#    #+#             */
/*   Updated: 2025/12/31 08:29:08 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIECROWD_HPP
#define ZOMBIECROWD_HPP
#define HORDE_SIZE 10
#include <iostream>
#include <string>


class Zombie{
    
    std::string namex;
    public :
        void announce(void);
        void setTheName(std::string name);
};


Zombie* zombieHorde(int N , std::string name);

#endif