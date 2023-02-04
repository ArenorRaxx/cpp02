/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 13:18:11 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/02/04 13:32:00 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../heads/Point.hpp"

static float	basearea(Point const a, Point const b, Point const c);

bool bsp(Point const a, Point const b, Point const c, Point const d)
{
	float area_of_main_triangle = basearea(a, b, c);
	float area_of_abd = basearea(a, b, d);
	float area_of_bcd = basearea(b, c, d);
	float area_of_cad = basearea(c, a, d);
	if (!(area_of_main_triangle && area_of_abd && area_of_bcd && area_of_cad))
		return (false);
	if (area_of_abd + area_of_bcd + area_of_cad == area_of_main_triangle)
		return (true);
	return (false);
}

static float	basearea(Point const a, Point const b, Point const c)
{
	float aire = a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat()) + \
	b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat()) + c.getX().toFloat() * \
	(a.getY().toFloat() - b.getY().toFloat());
	aire = aire / 2;
	if (aire < 0)
		aire = aire * (-1);
	return aire;
}