/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-alam <kel-alam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 11:21:21 by kel-alam          #+#    #+#             */
/*   Updated: 2021/11/30 08:43:24 by kel-alam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

void	ft_putchar(char c);
int		ft_print_char(char c);
int		len_num(unsigned int n);
int		len_number(int n);
int		ft_format(va_list args, char format);
int		ft_print_uint(unsigned int nb);
int		ft_print_hex(unsigned long long number, const char format);
int		ft_print_ptr(unsigned long long ptr);
int		ft_print_string(char *str);
int		ft_print_integer(int nb);
int		ft_printf(const char *format, ...);
void	ft_put_hex(unsigned long long number, const char format);
int		ft_length_hex(unsigned long long number);
int		ft_length_ptr(unsigned long long number);
void	ft_put_ptr(unsigned long long nb);

#endif