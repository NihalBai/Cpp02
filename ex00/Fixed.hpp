/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaidaou <nbaidaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 09:58:35 by nbaidaou          #+#    #+#             */
/*   Updated: 2025/10/25 13:57:47 by nbaidaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int in;
    static const int fract = 8;
public:
    Fixed();
    Fixed(const Fixed &f);
    Fixed &operator=(const Fixed &f);
    ~Fixed();
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};






#endif