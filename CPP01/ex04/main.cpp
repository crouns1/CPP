/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <jait-chd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 09:09:38 by jait-chd          #+#    #+#             */
/*   Updated: 2025/12/31 09:21:52 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

#include "Replace.hpp"

static int printError(std::string const &msg) {
	std::cerr << msg << std::endl;
	return 1;
}

int main(int c, char **v) {
	if (c != 4)
		return printError("Usage: ./sed <filename> <s1> <s2>");

	std::string filename = v[1];
	std::string s1 = v[2];
	std::string s2 = v[3];

	if (filename.empty())
		return printError("Error: filename is empty");
	if (s1.empty())
		return printError("Error: s1 must be non-empty");

	std::ifstream in(filename.c_str());
	if (!in)
		return printError("Error: cannot open input file");

	std::string input;
	char ch;
	while (in.get(ch))
		input += ch;
	if (in.bad())
		return printError("Error: failed while reading input file");

	std::string output = replaceAll(input, s1, s2);

	std::string outName = filename + ".replace";
	std::ofstream out(outName.c_str());
	if (!out)
		return printError("Error: cannot create output file");
	out << output;
	if (!out)
		return printError("Error: failed while writing output file");

	return 0;
}
