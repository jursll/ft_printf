/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrusse <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:59:55 by julrusse          #+#    #+#             */
/*   Updated: 2024/10/21 18:44:11 by julrusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int	main(void)
{
	char c = 'A';
	char s[] = "BCDEF";
	char s0[] = "";
	int	d = 1234;
	int i = 4567;
	unsigned int u = 42;
	unsigned int u0 = -42;
	int count1;
	int count2;

	count1 = ft_printf("char c: %c, string s: %s, empty string: %s, nb d: %d, nb i: %i.\n", c, s, s0, d, i);
	printf("ft_printf counts %d chars\n", count1);
	count1 = ft_printf("unsigned int: %u, negative unsigned int: %u\n", u, u0);
	printf("ft_printf counts %d chars\n\n", count1);

	count2 = printf("char c: %c, string s: %s, empty string: %s, nb d: %d, nb i: %i.\n", c, s, s0, d, i);
	printf("printf counts %d chars\n", count2);
	count2 = printf("unsigned int: %u, negative unsigned int: %u\n", u, u0);
	printf("printf counts %d chars\n", count1);

	return (0);
}
