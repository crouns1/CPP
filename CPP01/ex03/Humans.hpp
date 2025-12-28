/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Humans.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <jait-chd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 11:25:16 by jait-chd          #+#    #+#             */
/*   Updated: 2025/12/28 17:43:58 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANS_HPP
#define HUMANS_HPP
#include "Weapon.hpp"

class HumanA {
    private:
        std::string name;
        Weapon& weapon;
    public:
        HumanA(std::string name_x, Weapon& weapon_x); 
        ~HumanA(void);
        void attack(void);
    };

class HumanB {
    private:
        std::string name;
        Weapon* weapon;
    public:
        HumanB(std::string name_x); 
        ~HumanB(void);
        void setWeapon(Weapon& weapon_x);
        void attack(void);
};

#endif