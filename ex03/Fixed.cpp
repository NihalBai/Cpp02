/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaidaou <nbaidaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 10:04:01 by nbaidaou          #+#    #+#             */
/*   Updated: 2025/11/04 10:19:20 by nbaidaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"


Fixed::Fixed() : in(0) {}

Fixed::Fixed(const Fixed &other)
{
    this->in = other.in;
}

Fixed::Fixed(const int val)
{
    this->in = val << fract;
}

Fixed::Fixed(const float val)
{
    this->in = static_cast<int>(roundf(val * (1 << fract)));
}

Fixed::~Fixed() {}

Fixed &Fixed::operator=(const Fixed &other)
{
    if (this != &other)
        this->in = other.in;
    return *this;
}

float Fixed::toFloat( void ) const
{
    return static_cast<float>(this->in) / (1 << fract);
}

int Fixed::toInt( void ) const
{
    return this->in >> fract;
}

std::ostream &operator<<(std::ostream &os, const Fixed &f)
{
    os << f.toFloat();
    return os;
}

