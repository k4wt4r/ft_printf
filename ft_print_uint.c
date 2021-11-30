/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-alam <kel-alam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 10:10:49 by kel-alam          #+#    #+#             */
/*   Updated: 2021/11/30 08:33:42 by kel-alam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	len_num(unsigned int n)
{
	int	len;

	len = (n == 0);
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

int	ft_print_uint(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb >= 10)
		ft_print_uint(nb / 10);
	ft_putchar(nb % 10 + '0');
	len = len_num(nb);
	return (len);
}
