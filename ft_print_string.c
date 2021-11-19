/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-alam <kel-alam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 10:22:23 by kel-alam          #+#    #+#             */
/*   Updated: 2021/11/19 18:47:30 by kel-alam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	ft_print_string(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		write(1, "(null)", 6);
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}
