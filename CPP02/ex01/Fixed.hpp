/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-chd <jait-chd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 10:18:11 by jait-chd          #+#    #+#             */
/*   Updated: 2026/01/04 10:36:48 by jait-chd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
	int              fixed_point_num_val;
	static const int num_fract_bits = 8;

public:
	Fixed();
	Fixed(const Fixed& other);
	Fixed(const int n);
	Fixed(const float f);
	Fixed& operator=(const Fixed& other);
	~Fixed();

	int   getRawBits() const;
	void  setRawBits(int const raw);

	float toFloat() const;
	int   toInt() const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& f);

#endif
