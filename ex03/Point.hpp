/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaidaou <nbaidaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 10:00:27 by nbaidaou          #+#    #+#             */
/*   Updated: 2025/11/04 10:16:31 by nbaidaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
    const Fixed x;
    const Fixed y;
public:
    Point();
    Point(const Fixed &x, const Fixed &y);
    ~Point();
    Point &operator=(Point const &other);
    const Fixed &getX() const;
    const Fixed &getY() const;
    
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
#endif