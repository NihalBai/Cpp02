/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaidaou <nbaidaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 11:20:19 by nbaidaou          #+#    #+#             */
/*   Updated: 2025/10/25 12:04:37 by nbaidaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

Fixed::Fixed():in(0)
{
    std::cout << "Default constructor called\n";
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

Fixed ::Fixed(const Fixed &f){
    std::cout << "Copy constructor called\n";
   *this = f;
}

Fixed::&Fixed operator=(const Fixed &f){
    std::cot << "Copy assignment operator called\n";
    if(this != &f)
       this->in = f.in;
    return *this;
}
int Fixed:: getRawBits( void ) const
{
    std::cout << "getRawBits member function called\n";
    return in;
}

void Fixed :: setRawBits(int const raw)
{
    in = raw;
}