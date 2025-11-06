/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaidaou <nbaidaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 10:13:28 by nbaidaou          #+#    #+#             */
/*   Updated: 2025/11/06 11:28:03 by nbaidaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static float sign(float x1, float y1, float x2, float y2, float x3, float y3)
{
	return (x1 - x3) * (y2 - y3) - (x2 - x3) * (y1 - y3);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float px = point.getX().toFloat();
	float py = point.getY().toFloat();
	float ax = a.getX().toFloat();
	float ay = a.getY().toFloat();
	float bx = b.getX().toFloat();
	float by = b.getY().toFloat();
	float cx = c.getX().toFloat();
	float cy = c.getY().toFloat();

	float d1 = sign(px, py, ax, ay, bx, by);
	float d2 = sign(px, py, bx, by, cx, cy);
	float d3 = sign(px, py, cx, cy, ax, ay);

	const float eps = 1e-6f;
	if (fabs(d1) < eps || fabs(d2) < eps || fabs(d3) < eps)
		return false;

	bool has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
	bool has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

	return !(has_neg && has_pos);
}
