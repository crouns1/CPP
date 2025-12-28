/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd < jait-chd@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 14:21:04 by jait-chd          #+#    #+#             */
/*   Updated: 2025/12/28 14:21:05 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 1;
    } else {
        for (int i = 1; i < argc; ++i) {
            std::string arg = argv[i];
            for (size_t j = 0; j < arg.size(); ++j) {
                if (arg[j] >= 'a' && arg[j] <= 'z') {
                    arg[j] -= 32;
                }
            }
            std::cout << arg << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
