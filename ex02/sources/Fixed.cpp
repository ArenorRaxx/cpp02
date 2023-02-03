/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 12:55:12 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/02/03 17:51:25 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../heads/Fixed.hpp"
#include <cmath>

//	Canonical form

Fixed::Fixed(void): _MASK(8), _value(0)
{
	// std::cout << "Default constructor called.\n";
}

Fixed::Fixed(const int integer): _MASK(8), _value(integer << _MASK)
{
	// std::cout << "Int constructor called.\n";
}

Fixed::Fixed(const float floating_point): _MASK(8), _value(round(floating_point * (1 << _MASK)))
{
	// std::cout << "Float constructor called.\n";
}

Fixed::~Fixed(void)
{
	// std::cout << "Destructor called.\n";
}

//	Constructors

Fixed::Fixed(const Fixed &to_copy): _MASK(8)
{
	// std::cout << "Copy constructor called.\n";
	*this = to_copy;
}

Fixed &Fixed::operator = (const Fixed &to_set_to)
{
	// std::cout << "Copy assignment operator called.\n";
	this->_value = to_set_to.getRawBits();
	return (*this);
}

//	Methods

int			Fixed::toInt(void) const
{
	return (this->_value >> _MASK);
}

float		Fixed::toFloat(void) const
{
	return ((double)this->_value / (double)(1 << _MASK));
}

//	Get / Set

void		Fixed::setRawBits(const int raw)
{
	this->_value = raw;
}

int Fixed::getRawBits(void) const
{
	return (this->_value);
}

//	Min / Max

Fixed &Fixed::min(Fixed &f1, Fixed &f2)
{
	return (f1 < f2 ? f1 : f2);
}

Fixed const &Fixed::min(Fixed const &f1, Fixed const &f2)
{
	return (f1 < f2 ? f1 : f2);
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2)
{
	return (f1 > f2 ? f1 : f2);
}

Fixed const &Fixed::max(Fixed const &f1, Fixed const &f2)
{
	return (f1 > f2 ? f1 : f2);
}

//	Inc / Dec Operators

Fixed &Fixed::operator++(void)
{
	this->_value += 1;
	return (*this);
}

Fixed const	Fixed::operator++(int)
{
	const Fixed	temp = (*this);

	this->operator++();
	return (temp);
}

Fixed &Fixed::operator--(void)
{
	this->_value += 1;
	return (*this);
}

Fixed const	Fixed::operator--(int)
{
	const Fixed	temp = (*this);

	this->operator--();
	return (temp);
}

/*	EXTERNAL OPERATORS	*/
//	Stream operators

std::ostream &operator << (std::ostream &out, Fixed const &fixed_point)
{
	out << fixed_point.toFloat();
	return (out);
}

//	Comparison Operators

bool operator > (Fixed const &f1, Fixed const &f2)
{
	return (f1.toFloat() > f2.toFloat());
}

bool operator < (Fixed const &f1, Fixed const &f2)
{
	return (f1.toFloat() < f2.toFloat());
}

bool operator >= (Fixed const &f1, Fixed const &f2)
{
	return (f1.toFloat() >= f2.toFloat());
}

bool operator <= (Fixed const &f1, Fixed const &f2)
{
	return (f1.toFloat() <= f2.toFloat());
}

bool operator ==(Fixed const &f1, Fixed const &f2)
{
	return (f1.toFloat() == f2.toFloat());
}

bool operator != (Fixed const &f1, Fixed const &f2)
{
	return (f1.toFloat() != f2.toFloat());
}

//	Arithmetic operators

Fixed operator + (Fixed const &f1, Fixed const &f2)
{
	Fixed	result(f1.toFloat() + f2.toFloat());
	return (result);
}

Fixed operator - (Fixed const &f1, Fixed const &f2)
{
	Fixed	result(f1.toFloat() - f2.toFloat());
	return (result);
}

Fixed operator * (Fixed const &f1, Fixed const &f2)
{
	Fixed	result(f1.toFloat() * f2.toFloat());
	return (result);
}

Fixed operator / (Fixed const &f1, Fixed const &f2)
{
	Fixed	result(f1.toFloat() / f2.toFloat());
	return (result);
}
