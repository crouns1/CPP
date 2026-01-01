/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <jait-chd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 10:40:10 by jait-chd          #+#    #+#             */
/*   Updated: 2025/12/31 19:51:49 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main() {
    std::string str = "This is a brain";
    std::string* stringPTR = &str;
    std::string& stringREF = str;
    std::cout << "Addr of str: " << &str << std::endl;
    std::cout << "Addr of stringPTR: " << stringPTR << std::endl;
    std::cout << "Addr of stringREF: " << &stringREF << std::endl;
    std::cout << "value of str: " << str << std::endl;
    std::cout << "value of stringPTR : " << *stringPTR << std::endl;
    std::cout << "value of stringREF : " << stringREF << std::endl;
}