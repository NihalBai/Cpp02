/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaidaou <nbaidaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 09:29:07 by nbaidaou          #+#    #+#             */
/*   Updated: 2025/11/05 20:52:10 by nbaidaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cstdlib>
#include <iostream>

Fixed::Fixed() : in(0) {}

Fixed::Fixed(const Fixed &other)
{
    this->in = other.in;
}

Fixed::Fixed(const int val)
{
    in = val << fract;
}

Fixed::Fixed(const float val)
{
    in = static_cast<int>(roundf(val * (1 << fract)));
}

Fixed::~Fixed() {}

Fixed &Fixed::operator=(const Fixed &other)
{
    if (this != &other)
        this->in = other.in;
    return *this;
}

// comparison operators
bool Fixed::operator>(Fixed const &other) const { return this->in > other.in; }
bool Fixed::operator<(Fixed const &other) const { return this->in < other.in; }
bool Fixed::operator>=(Fixed const &other) const { return this->in >= other.in; }
bool Fixed::operator<=(Fixed const &other) const { return this->in <= other.in; }
bool Fixed::operator==(Fixed const &other) const { return this->in == other.in; }
bool Fixed::operator!=(Fixed const &other) const { return this->in != other.in; }

// arithmetic operators
Fixed Fixed::operator+(Fixed const &other) const
{
    Fixed result;
    result.in = this->in + other.in;
    return result;
}

Fixed Fixed::operator-(Fixed const &other) const
{
    Fixed result;
    result.in = this->in - other.in;
    return result;
}

Fixed Fixed::operator*(Fixed const &other) const
{
    Fixed result;
    long tmp = static_cast<long>(this->in) * static_cast<long>(other.in);
    result.in = static_cast<int>(tmp >> fract);
    return result;
}

Fixed Fixed::operator/(Fixed const &other) const
{
    Fixed result;
    // guard against division by zero in the raw fixed representation
    if (other.in == 0)
    {
        std::cerr << "Error: Division by zero in Fixed::operator/()" << std::endl;
        std::exit(EXIT_FAILURE);
    }
    long tmp = (static_cast<long>(this->in) << fract) / static_cast<long>(other.in);
    result.in = static_cast<int>(tmp);
    return result;
}

// increments / decrements
Fixed &Fixed::operator++() // prefix
{
    ++this->in;
    return *this;
}

Fixed Fixed::operator++(int) // postfix
{
    Fixed tmp(*this);
    ++(*this);
    return tmp;
}

Fixed &Fixed::operator--() // prefix
{
    --this->in;
    return *this;
}

Fixed Fixed::operator--(int) // postfix
{
    Fixed tmp(*this);
    --(*this);
    return tmp;
}

// min / max
Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    return (a < b) ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    return (a < b) ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    return (a > b) ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    return (a > b) ? a : b;
}

// conversions
float Fixed::toFloat(void) const
{
    return static_cast<float>(this->in) / (1 << fract);
}

int Fixed::toInt(void) const
{
    return this->in >> fract;
}

// stream operator
std::ostream &operator<<(std::ostream &os, const Fixed &f)
{
    os << f.toFloat();
    return os;
}