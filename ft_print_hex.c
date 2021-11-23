/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-alam <kel-alam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 09:17:45 by kel-alam          #+#    #+#             */
/*   Updated: 2021/11/23 16:22:01 by kel-alam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_length_hex(unsigned int number)
{
	int	len;

	len = 1;
	while (number != 0)
	{
		number /= 16;
		len++;
	}
	return (len);
}


void	ft_put_hex(unsigned int number, const char format)
{
	if (number >= 16)
	{
		ft_put_hex(number / 16, format);
		ft_put_hex(number % 16, format);
	}
	else
	{
		if (number <= 9)
			ft_print_char(number + '0');
		else
		{
			if (format == 'x')
				ft_print_char((number - 10 + 'a') + '0');
			if (format == 'X')
				ft_print_char((number - 10 + 'A') + 0);
		}
	}
}

int	ft_print_hex(unsigned int number, const char format)
{
	if (number == 0)
		return (0);
	else
		ft_put_hex(number, format);
	return (ft_length_hex(number));
}
//ok