/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 12:55:12 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/02/03 13:28:14 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../heads/Fixed.hpp"
#include <iostream>

Fixed::Fixed(void): _value(0), _MASK(8)
{
	std::cout << "Default constructor called.\n";
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called.\n";
}

Fixed::Fixed(const Fixed &to_copy): _MASK(8)
{
	std::cout << "Copy constructor called.\n";
	*this = to_copy;
}

Fixed &Fixed::operator=(const Fixed &to_set_to)
{
	int		new_value;

	std::cout << "Copy assignment operator called.\n";
	this->_value = to_set_to.getRawBits();
	return (*this);
}

void		Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called\n";
	this->_value = raw;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (this->_value);
}