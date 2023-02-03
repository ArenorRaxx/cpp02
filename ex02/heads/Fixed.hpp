/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 12:43:35 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/02/03 17:47:38 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		const int	_MASK;
		int			_value;
	public:
	//	Canonical form

		Fixed();
		~Fixed();
		Fixed(Fixed const&);
		Fixed &operator = (Fixed const&);

	//	Constructors

		Fixed(const int);
		Fixed(const float);

	//	Methods
	
		int			toInt(void) const;
		float		toFloat(void) const;

	//	Get / Set
	
		int			getRawBits(void) const;
		void		setRawBits(const int);

	//	Min / Max

		static Fixed		&min(Fixed&, Fixed&);
		static Fixed const	&min(Fixed const&, Fixed const&);
		static Fixed		&max(Fixed &, Fixed &);
		static Fixed const	&max(Fixed const&, Fixed const&);
	
	//	Inc / Dec Operators
		Fixed 		&operator++(void);
		Fixed const	operator++(int);
		Fixed		&operator--(void);
		Fixed const	operator--(int);
};

/*	EXTERNAL OPERATORS	*/
//	Stream operators

std::ostream &operator << (std::ostream&, Fixed const&);

//	Comparison operators

bool operator > (Fixed const&, Fixed const&);
bool operator < (Fixed const&, Fixed const&);
bool operator >= (Fixed const&, Fixed const&);
bool operator <= (Fixed const&, Fixed const&);
bool operator == (Fixed const&, Fixed const&);
bool operator != (Fixed const&, Fixed const&);

//	Arithmetic operators

Fixed operator + (Fixed const&, Fixed const&);
Fixed operator - (Fixed const&, Fixed const&);
Fixed operator * (Fixed const&, Fixed const&);
Fixed operator / (Fixed const&, Fixed const&);


#endif