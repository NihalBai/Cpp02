/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaidaou <nbaidaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 14:20:13 by nbaidaou          #+#    #+#             */
/*   Updated: 2025/10/25 14:38:21 by nbaidaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int in;
    static const int fract = 8;
public:
    Fixed();
    Fixed(const int n);
    Fixed(const float f);
    Fixed(const Fixed &f);
    Fixed &operator=(const Fixed &other);
    ~Fixed();
    float toFloat( void ) const;
    int toInt( void ) const;
    
    // stream insertion operator
    friend std::ostream &operator<<(std::ostream &os, const Fixed &f);
};


#endif