/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-alam <kel-alam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 09:17:45 by kel-alam          #+#    #+#             */
/*   Updated: 2021/11/19 17:57:31 by kel-alam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_length_hex(unsigned int number)
{
	int	len;

	len = 0;
	while (number != 0)
	{
		len++;
		number /= 16;
	}
	return (len);
}

void	ft_put_hex(unsigned int number, const char *format)
{
	int len_number;

	len_number = 0;
	if (number >= 16)
	{
		ft_put_hex(number / 16, format);
		ft_put_hex(number % 16, format);
	}
	else
	{
		if (number < 10)
		{
			ft_putchar(number + '0');
		}
		else
		{
			if (format == 'x')
			{
				ft_putchar((number - 10 + 'a') + '0');
			}
			if (format == 'X')
			{
				ft_putchar((number - 10 + 'A') + '0');
			}
		}
	}
}

int	ft_print_hex(unsigned long int number, const char *format)
{
	if (number == 0)
		return (write(1, "0", 1));
	else
		ft_print_hex(number, format);
	return (ft_length_hex(number));
}
