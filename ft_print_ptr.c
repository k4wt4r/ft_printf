/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-alam <kel-alam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 16:51:07 by kel-alam          #+#    #+#             */
/*   Updated: 2021/11/23 16:27:57 by kel-alam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>
#include <stdio.h>

int	ft_length_ptr(unsigned int number)
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

void	ft_put_ptr(unsigned long nb)
{
	if (nb >= 16)
	{
		ft_put_ptr (nb / 16);
		ft_put_ptr(nb % 16);
	}
	else if (nb < 10)
		ft_print_char(nb + '0');
	else
		ft_print_char((nb - 10 + 'a') + '0');
}

int	ft_print_ptr(unsigned long  ptr)
{
	int	printf_len;

	printf_len = 0;
	if (ptr == 0)
	{
		write(1,"0",1);
		return (1);
	}
	else
	{
		printf_len += ft_length_ptr(ptr);
		ft_put_ptr(ptr);
	}
	return (printf_len);
}

