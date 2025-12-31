/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <jait-chd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 09:09:35 by jait-chd          #+#    #+#             */
/*   Updated: 2025/12/31 09:23:50 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

std::string replaceAll(std::string const &input, std::string const &s1, std::string const &s2) {
	std::string result;
	std::string::size_type pos = 0;

	while (1) {
		std::string::size_type found = input.find(s1, pos);
		if (found == std::string::npos)
			break;
		result += input.substr(pos, found - pos);
		result += s2;
		pos = found + s1.length();
	}
	result += input.substr(pos);
	return result;
}
