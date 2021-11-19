/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-alam <kel-alam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 11:24:41 by kel-alam          #+#    #+#             */
/*   Updated: 2021/11/19 18:45:49 by kel-alam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int	print_len;
	int	i;

	va_start(args, str);
	print_len = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
			print_len += ft_format(args, str[i + 1]);
		else
			print_len += ft_print_character(args, str[i]);
	}
	va_end(args);
	return (print_len);
}