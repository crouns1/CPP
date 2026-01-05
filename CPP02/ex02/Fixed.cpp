/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <jait-chd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 08:38:24 by jait-chd          #+#    #+#             */
/*   Updated: 2026/01/05 08:54:41 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
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

bool Fixed::operator>(const Fixed& other) const {
	return fixed_point_num_val > other.fixed_point_num_val;
}

bool Fixed::operator<(const Fixed& other) const {
	return fixed_point_num_val < other.fixed_point_num_val;
}

bool Fixed::operator>=(const Fixed& other) const {
	return fixed_point_num_val >= other.fixed_point_num_val;
}

bool Fixed::operator<=(const Fixed& other) const {
	return fixed_point_num_val <= other.fixed_point_num_val;
}

bool Fixed::operator==(const Fixed& other) const {
	return fixed_point_num_val == other.fixed_point_num_val;
}

bool Fixed::operator!=(const Fixed& other) const {
	return fixed_point_num_val != other.fixed_point_num_val;
}

Fixed Fixed::operator+(const Fixed& other) const {
	Fixed out;
	out.setRawBits(fixed_point_num_val + other.fixed_point_num_val);
	return out;
}

Fixed Fixed::operator-(const Fixed& other) const {
	Fixed out;
	out.setRawBits(fixed_point_num_val - other.fixed_point_num_val);
	return out;
}

Fixed Fixed::operator*(const Fixed& other) const {
	Fixed out;
	const long long a = (long long)fixed_point_num_val;
	const long long b = (long long)other.fixed_point_num_val;
	out.setRawBits((int)((a * b) >> num_fract_bits));
	return out;
}

Fixed Fixed::operator/(const Fixed& other) const {
	Fixed out;
	const long long numerator = ((long long)fixed_point_num_val << num_fract_bits);
	out.setRawBits((int)(numerator / (long long)other.fixed_point_num_val));
	return out;
}

Fixed& Fixed::operator++() {
	++fixed_point_num_val;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed tmp(*this);
	++fixed_point_num_val;
	return tmp;
}

Fixed& Fixed::operator--() {
	--fixed_point_num_val;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed tmp(*this);
	--fixed_point_num_val;
	return tmp;
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
	if (a < b)
		return a;
	return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
	if (a < b)
		return a;
	return b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
	if (a > b)
		return a;
	return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
	if (a > b)
		return a;
	return b;
}

std::ostream& operator<<(std::ostream& os, const Fixed& f) {
	os << f.toFloat();
	return os;
}
