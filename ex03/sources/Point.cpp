/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 13:07:40 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/02/04 13:39:21 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../heads/Point.hpp"

//	Canonical form

Point::Point(): x(0), y(0)
{
}

Point::~Point()
{
}

Point::Point(Point const &p): x(p.x), y(p.y)
{
}

Point &Point::operator = (Point const &p)
{
	this->x = p.x;
	this->y = p.y;
	return (*this);
}

//	Constructors

Point::Point(float const f1, float const f2): x(Fixed(f1)), y(Fixed(f2))
{
}

//	Get

Fixed	Point::getX(void) const
{
	return (this->x);
}

Fixed	Point::getY(void) const
{
	return (this->y);
}
