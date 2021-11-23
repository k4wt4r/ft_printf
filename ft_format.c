/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-alam <kel-alam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:39:58 by kel-alam          #+#    #+#             */
/*   Updated: 2021/11/23 15:20:33 by kel-alam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list args, char format)
{
	int	printf_len;

	printf_len = 0;
	if (format == 'c')
	{
		ft_print_char(va_arg(args, int));
	}
	else if (format == 's')
		printf_len += ft_print_string(va_arg(args, char *));
	else if (format == 'd' || format == 'i')
		printf_len += ft_print_integer(va_arg(args, int));
	else if (format == 'u')
		printf_len += ft_print_unint(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		printf_len += ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == 'p')
		printf_len += ft_print_ptr(va_arg(args, unsigned long));
	else if (format == '%')
		printf_len += write(1, "%", 1);
	return (printf_len);
}
