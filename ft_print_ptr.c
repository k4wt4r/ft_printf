/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-alam <kel-alam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 16:51:07 by kel-alam          #+#    #+#             */
/*   Updated: 2021/11/30 08:31:10 by kel-alam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_length_ptr(unsigned long long number)
{
	int	len;

	len = 0;
	while (number != 0)
	{
		number /= 16;
		len++;
	}
	return (len);
}

void	ft_put_ptr(unsigned long long nb)
{
	if (nb >= 16)
	{
		ft_put_ptr (nb / 16);
		ft_put_ptr(nb % 16);
	}
	else
	{
		if (nb <= 9)
			ft_putchar(nb + '0');
		else
			ft_putchar(nb - 10 + 'a');
	}
}

int	ft_print_ptr(unsigned long long ptr)
{
	int	printf_len;

	printf_len = 0;
	printf_len += write(1, "0x", 2);
	if (ptr == 0)
		printf_len += write(1, "0", 1);
	else
	{
		ft_put_ptr(ptr);
		printf_len += ft_length_ptr(ptr);
	}
	return (printf_len);
}
