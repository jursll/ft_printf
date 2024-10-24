/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrusse <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 15:12:39 by julrusse          #+#    #+#             */
/*   Updated: 2024/10/24 10:51:00 by julrusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include "libft.h"

int	ft_printf(const char *format, ...);
int	ft_putchar_count(char c);
int	ft_putstr_count(char *s);
int	ft_putnbr_count(int number);
int	ft_unsignedint_count(unsigned int number);
int	ft_hex_count(unsigned int number, int uppercase);
int	ft_ptr_count(void *ptr);

#endif
