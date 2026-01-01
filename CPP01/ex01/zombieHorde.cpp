/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <jait-chd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 07:32:17 by jait-chd          #+#    #+#             */
/*   Updated: 2025/12/31 19:51:46 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombiecrowd.hpp"

Zombie* zombieHorde( int N, std::string name ){
    Zombie *crowd = new Zombie[N];
    for(int i = 0; i < N ; i++) {
        crowd[i].setTheName(name);
    }
    return crowd;
}
