/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:08:05 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/02/04 13:44:39 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "heads/Fixed.hpp"
#include "heads/Point.hpp"
#include <iostream>

int main( void )
{
	Point a(0, 2.67f);
	Point b(3.45f, -3.06f);
	Point c(-2.5f, -3.06f);

	Point point(0, 0);		//	Inside the triangle

	std::cout << (bsp(a, b, c, point) ? "Point is in the triangle" : "Point is not in the triangle") << '\n';
	
	a = Point(0, 2.67f);
	b = Point(3.45f, -3.06f);
	c = Point(-2.5f, -3.06f);

	point = Point(-2.5f, -3.06f);	//	On a vertex of the triangle

	std::cout << (bsp(a, b, c, point) ? "Point is in the triangle" : "Point is not in the triangle") << '\n';

	a = Point(0, 2.67f);
	b = Point(0, -3.06f);
	c = Point(-2.5f, -3.06f);

	point = Point(0, 1);			//	On an edge of the triangle

	std::cout << (bsp(a, b, c, point) ? "Point is in the triangle" : "Point is not in the triangle") << '\n';
}