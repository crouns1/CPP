/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <jait-chd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 09:19:47 by jait-chd          #+#    #+#             */
/*   Updated: 2025/12/31 11:27:47 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <iostream>

#include "Harl.hpp"

int main(int c, char **v) {
	Harl harl;

	if (c == 2) {
		harl.complain(v[1]);
		return 0;
	}
	if (c != 1) {
		std::cerr << "Usage: ./harl [DEBUG|INFO|WARNING|ERROR]" << std::endl;
		return 1;
	}

	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
	harl.complain("NOT_A_LEVEL");

	return 0;
}
