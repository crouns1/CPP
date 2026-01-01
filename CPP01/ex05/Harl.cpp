/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <jait-chd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 09:20:13 by jait-chd          #+#    #+#             */
/*   Updated: 2026/01/01 15:09:39 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error(void) {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

// void Harl::complain(std::string level) {
// 	typedef void (Harl::*t_action)(void);

// 	static std::string  levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
// 	static t_action  actions[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

// 	for (int i = 0; i < 4; ++i) {
// 		if (levels[i] == level) {
// 			(this->*actions[i])();
// 			return;
// 		}
// 	}

// 	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
// }

// void Harl::complain(std::string level)
// {
//     typedef void (Harl::*t_action)(void);

//     t_action action = NULL;

//     switch (level[0])
//     {
//         case 'D':
//             action = &Harl::debug;
//             break;
//         case 'I':
//             action = &Harl::info;
//             break;
//         case 'W':
//             action = &Harl::warning;
//             break;
//         case 'E':
//             action = &Harl::error;
//             break;
//             std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
//             return;
//     }
//     (this->*action)();
// }

void Harl::complain(std::string level)
{
    typedef void (Harl::*t_action)(void);
    t_action action = NULL;
    switch (level[0])
    {
        case 'D':
            action = &Harl::debug;
            break;
        case 'I':
            action = &Harl::info;
            break;
        case 'W':
            action = &Harl::warning;
            break;
        case 'E':
            action = &Harl::error;
            break;
    }

    if (action != NULL)
        (this->*action)();
}
