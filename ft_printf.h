/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-alam <kel-alam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 11:21:21 by kel-alam          #+#    #+#             */
/*   Updated: 2021/11/19 17:58:13 by kel-alam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int		ft_format(va_list args, const char *format);
int		ft_print_hex(unsigned long int number, const char *format);
int		ft_print_ptr(unsigned long long ptr);
int		ft_print_character(char c);
int		ft_print_string(char *str);
int		ft_print_integer(int nb);
char	*ft_itoa(int n);
void	ft_putchar(char c);

#endif