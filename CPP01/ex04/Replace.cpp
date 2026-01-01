/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <jait-chd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 09:09:35 by jait-chd          #+#    #+#             */
/*   Updated: 2025/12/31 20:16:48 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

std::string replaceAll(std::string const &input, std::string const &s1, std::string const &s2) {
	std::string res;
	std::string::size_type pos = 0;

	while (1) {
		std::string::size_type found = input.find(s1, pos);
		if (found == std::string::npos)
			break;
		res += input.substr(pos, found - pos);
		res += s2;
		pos = found + s1.length();
	}
	res += input.substr(pos);
	return res;
}
