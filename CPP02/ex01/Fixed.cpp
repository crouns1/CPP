/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <jait-chd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 10:18:08 by jait-chd          #+#    #+#             */
/*   Updated: 2026/01/04 11:52:17 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : fixed_point_num_val(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) : fixed_point_num_val(other.fixed_point_num_val) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int n) : fixed_point_num_val(n << num_fract_bits) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f)
	: fixed_point_num_val((int)roundf(f * (float)(1 << num_fract_bits))) {
	std::cout << "Float constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		fixed_point_num_val = other.fixed_point_num_val;
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return fixed_point_num_val;
}

void Fixed::setRawBits(int const raw) {
	fixed_point_num_val = raw;
}

float Fixed::toFloat() const {
	return (float)fixed_point_num_val / (float)(1 << num_fract_bits);
}

int Fixed::toInt() const {
	return fixed_point_num_val >> num_fract_bits;
}

std::ostream& operator<<(std::ostream& os, const Fixed& f) {
	os << f.toFloat();
	return os;
}
