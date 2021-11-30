/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-alam <kel-alam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 11:24:41 by kel-alam          #+#    #+#             */
/*   Updated: 2021/11/30 08:42:13 by kel-alam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		print_len;
	int		i;

	va_start(args, format);
	print_len = 0;
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			print_len += ft_format(args, format[i + 1]);
			i++;
		}
		else
			print_len += ft_print_char(format[i]);
		i++;
	}
	va_end(args);
	return (print_len);
}
