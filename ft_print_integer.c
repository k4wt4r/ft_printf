/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_integer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-alam <kel-alam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 15:25:31 by kel-alam          #+#    #+#             */
/*   Updated: 2021/11/30 08:32:40 by kel-alam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	len_number(int n)
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

int	ft_print_integer(int nb)
{
	int		len;
	long	nbr;

	nbr = nb;
	len = 0;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
		len++;
	}
	if (nbr < 10)
		ft_putchar(nbr + '0');
	else
	{
		ft_print_integer(nbr / 10);
		ft_print_integer(nbr % 10);
	}
	return (len + len_number(nbr));
}
