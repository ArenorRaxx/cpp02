/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 13:05:26 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/02/04 13:40:24 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		Fixed	x;
		Fixed	y;
	public:
		Point();
		~Point();
		Point(Point const&);
		Point &operator = (Point const&);

		//	Constructors

		Point(float const, float const);

		//	Get

		Fixed getX(void) const;
		Fixed getY(void) const;
};

bool	bsp(Point const, Point const, Point const, Point const);

#endif