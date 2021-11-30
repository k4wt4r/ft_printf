/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-alam <kel-alam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 09:17:45 by kel-alam          #+#    #+#             */
/*   Updated: 2021/11/30 08:35:17 by kel-alam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_length_hex(unsigned long long number)
{
	int	len;

	len = (number == 0);
	while (number != 0)
	{
		number /= 16;
		len++;
	}
	return (len);
}

void	ft_put_hex(unsigned long long number, const char format)
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
				ft_print_char(number - 10 + 'a');
			if (format == 'X')
				ft_print_char(number - 10 + 'A');
		}
	}
}

int	ft_print_hex(unsigned long long number, const char format)
{
	if (number == 0)
	{
		ft_print_char('0');
		return (1);
	}
	else
		ft_put_hex(number, format);
	return (ft_length_hex(number));
}
