/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_integer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-alam <kel-alam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 15:25:31 by kel-alam          #+#    #+#             */
/*   Updated: 2021/11/23 15:21:22 by kel-alam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	len_number(int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

int	ft_print_integer(int nb)
{
	int len;

	len = 0;
	if (nb > 10)
		ft_print_integer(nb / 10);
	ft_putchar(nb % 10 + '0');
	len = len_number(nb);
	return (len);
}
//ok