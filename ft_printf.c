/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrusse <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 14:57:30 by julrusse          #+#    #+#             */
/*   Updated: 2024/10/21 18:35:20 by julrusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_select_arg(char c, va_list *args)
{
	int	count;

	count = 0;
	if (c == 'c')
		count = ft_putchar_count((char)va_arg(*args, int));
	else if (c == 's')
		count = ft_putstr_count(va_arg(*args, char *));
	else if (c == 'd' || c == 'i')
		count = ft_putnbr_count(va_arg(*args, int));
	else if (c == 'u')
		count = ft_unsignedint_count(va_arg(*args, unsigned int));
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;
	int		result;

	va_start(args, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			result = ft_select_arg(format[i], &args);
			count += result;
		}
		else
			count += ft_putchar_count(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}
