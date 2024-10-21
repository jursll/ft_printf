/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_words_count.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrusse <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 20:07:48 by julrusse          #+#    #+#             */
/*   Updated: 2024/10/21 15:29:01 by julrusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putchar_count(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	ft_putstr_count(char *s)
{
	size_t	count;
	if (!s)
	{
		write(1, "(null)", 6);
	}
	count = 0;
	while (s[count])
	{
		ft_putchar_fd(s, 1);
		count++;
	}

	return (count);
}
