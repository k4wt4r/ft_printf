/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-alam <kel-alam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 15:43:00 by kel-alam          #+#    #+#             */
/*   Updated: 2021/11/19 18:49:26 by kel-alam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	ft_format(va_list args, const char *format)
{
	int	printf_len;

	printf_len = 0;
	if (format == 'c')
		printf_len += ft_print_character(va_arg(args, int));
	else if (format == 's')
		printf_len += ft_print_string(va_arg(args, char *));
	else if (format == 'd' || format == 'i')
		printf_len += ft_print_integer(va_arg(args, int));
	else if (format == 'u')
		printf_len += ft_print_unsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		printf_len += ft_print_hex(va_arg(args,unsigned long int), format);
	else if (format == 'p')
		printf_len += ft_print_ptr(va_arg(args,unsigned long long));
	else if (format == '%')
		printf_len += write(1, "%", 1);
	return (printf_len);
}