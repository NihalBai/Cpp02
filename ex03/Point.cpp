/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaidaou <nbaidaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 10:02:25 by nbaidaou          #+#    #+#             */
/*   Updated: 2025/11/04 10:16:42 by nbaidaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point ::Point() : x(0), y(0) {}

Point::Point(const Fixed &x, const Fixed &y) : x(x), y(y) {}

Point ::~Point(){}

Point &Point::operator=(Point const &other)
{
	(void)other; // x and y are const — assignment is a no-op
	return *this;
}

const Fixed &Point::getX() const
{
	return this->x;
}

const Fixed &Point::getY() const
{
	return this->y;
}

