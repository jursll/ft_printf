/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrusse <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 14:57:30 by julrusse          #+#    #+#             */
/*   Updated: 2024/10/20 22:02:23 by julrusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	va_start(args, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
				ft_c((char)va_arg(args, int));
				count++;
			else if (format[i] == 's')
				ft_s((char *)va_arg(args, char *));
				count += ft_strlen((char *)va_arg(args, char *));
		}
		else
		{
			ft_putstr_fd(format[i], 1);
			i++;
			count++;
		}
	}
	va_end(args);
	return (count);
}
