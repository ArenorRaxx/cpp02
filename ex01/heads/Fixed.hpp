/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 12:43:35 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/02/03 14:23:23 by nikoraxx         ###   ########.fr       */
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
		Fixed(const Fixed&);
		Fixed		&operator = (const Fixed&);
	
	//	Constructors

		Fixed(const int 	integer);
		Fixed(const float	floating_point);

	//	Methods
	
		int			toInt(void) const;
		float		toFloat(void) const;

	//	Get / Set
	
		int			getRawBits(void) const;
		void		setRawBits(const int raw);
};

std::ostream &operator << (std::ostream&, Fixed const&);

#endif