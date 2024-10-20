/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   csp_functions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrusse <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 20:07:48 by julrusse          #+#    #+#             */
/*   Updated: 2024/10/20 20:11:24 by julrusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_c(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	ft_s(char *s)
{
	ft_putstr_fd(s, 1);
	return (1);
}
