/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenia <bgenia@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 20:04:39 by bgenia            #+#    #+#             */
/*   Updated: 2022/03/27 20:21:30 by bgenia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsp.hpp>

Fixed sign(const Point a, const Point b, const Point c)
{
	return (a.getX() - c.getX()) * (b.getY() - c.getY()) - (b.getX() - c.getX()) * (a.getY() - c.getY());
}

bool bsp(const Point a, const Point b, const Point c, const Point point)
{
	Fixed	d1, d2, d3;
	bool	neg, pos;

	d1 = sign(point, a, b);
	d2 = sign(point, b, c);
	d3 = sign(point, c, a);

	neg = (d1 <= 0) || (d2 <= 0) || (d3 <= 0);
	pos = (d1 >= 0) || (d2 >= 0) || (d3 >= 0);

	return !(neg && pos);
}
