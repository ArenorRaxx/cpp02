/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikoraxx <nikoraxx@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 12:43:35 by nikoraxx          #+#    #+#             */
/*   Updated: 2023/02/03 13:14:49 by nikoraxx         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	private:
		int			_value;
		const int	_MASK;
	public:
	//	Canonical form

		Fixed();
		~Fixed();
		Fixed(const Fixed&);
		Fixed		&operator=(const Fixed&);
	
	//	Methods

		void		setRawBits(const int raw);
		int			getRawBits(void) const;
};

#endif