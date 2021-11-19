/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-alam <kel-alam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 16:51:07 by kel-alam          #+#    #+#             */
/*   Updated: 2021/11/19 18:46:09 by kel-alam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>


int	ft_length_ptr (int number)
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

void	ft_put_ptr(unsigned long nb)
{
	if (nb >= 16)
	{
		ft_put_ptr (nb / 16);
		ft_put_ptr(nb % 16);
	}
	else if (nb < 10)
		ft_putchar(nb + 48);
	else
		ft_putchar((nb + 'a' - 10));
}

int	ft_print_ptr(unsigned long long ptr)
{
	int	printf_len;

	printf_len = 0;
	printf_len += write(1,"0x", 2);
	if (ptr == 0)
		printf_len += write(1, "0", 1);
	else
	{
		printf_len += ft_length_ptr(ptr);
		ft_put_ptr(ptr);
	}
	return (printf_len);
}
