/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaidaou <nbaidaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 09:13:36 by nbaidaou          #+#    #+#             */
/*   Updated: 2025/11/06 11:44:48 by nbaidaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
#include <cstdlib>

class Fixed
{
private:
    int in;
    static const int fract = 8;
public:
    Fixed();
    Fixed(const Fixed &other);
    Fixed(const int val);
    Fixed(const float val);
    Fixed &operator=(const Fixed &other);
    ~Fixed();
    float toFloat( void ) const;
    int toInt( void ) const;

    bool operator>(Fixed const &other) const;
    bool operator<(Fixed const &other) const;
    bool operator>=(Fixed const &other) const;
    bool operator<=(Fixed const &other) const;
    bool operator==(Fixed const &other) const;
    bool operator!=(Fixed const &other) const;
    Fixed operator+(Fixed const &other) const;
    Fixed operator-(Fixed const &other) const;
    Fixed operator*(Fixed const &other) const;
    Fixed operator/(Fixed const &other) const;
    Fixed &operator++();       
    Fixed operator++(int);     
    Fixed &operator--();       
    Fixed operator--(int);     
    static Fixed &min(Fixed &a, Fixed &b);
    static const Fixed &min(const Fixed &a, const Fixed &b);
    static Fixed &max(Fixed &a, Fixed &b);
    static const Fixed &max(const Fixed &a, const Fixed &b);

};
std::ostream &operator<<(std::ostream &os, const Fixed &f);

#endif