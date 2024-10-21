/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers_count.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrusse <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:19:10 by julrusse          #+#    #+#             */
/*   Updated: 2024/10/21 18:33:32 by julrusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr_count(int number)
{
	int	count;

	count = 0;
	if (number == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (number < 0)
	{
		count += ft_putchar_count('-');
		number *= -1;
	}
	if (number > 9)
		count += ft_putnbr_count(number / 10);
	count += ft_putchar_count(number % 10 + '0');
	return (count);
}

int	ft_unsignedint_count(unsigned int number)
{
	int	count;

	count = 0;
	if (number >= 10)
		count += ft_unsignedint_count(number / 10);
	count += ft_putchar_count(number % 10 + '0');
	return (count);
}
