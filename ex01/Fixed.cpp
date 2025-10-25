/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaidaou <nbaidaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 14:23:32 by nbaidaou          #+#    #+#             */
/*   Updated: 2025/10/25 14:38:34 by nbaidaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

Fixed:: Fixed(): in(0)
{
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int n) : in(n << fract)
{
    std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float f) : in(roundf(f * (1 << fract)))
{
    std::cout << "Float constructor called\n";
}

Fixed::Fixed(const Fixed &f)
{
    std::cout << "Copy constructor called\n";
    this->in = f.in;
}

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called\n";
    if (this != &other)
        this->in = other.in;
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}
float Fixed:: toFloat( void ) const
{
    return static_cast<float>(in) / (1 << fract);
}

int Fixed:: toInt( void ) const
{
    return in >> fract;
}

std::ostream &operator<<(std::ostream &os, const Fixed &f)
{
    os << f.toFloat();
    return os;
}
