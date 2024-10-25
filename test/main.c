/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrusse <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:38:40 by julrusse          #+#    #+#             */
/*   Updated: 2024/10/25 13:09:28 by julrusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdio.h>

int main(void)
{
    char c = 'C';
    char s[] = "string";
    int i1 = 42;
//    int i2 = -42;
    unsigned int i3 = 1234;
//    unsigned int i4 = -1234;
    void *ptr = NULL;
    int count = 0;
    
    count = ft_printf("char: %c\nstring: %s\npointer: %p\ndecimal: %d\nint: %i\nunsigned decimal: %u\nhex uppercase: %X\nhex lowercase: %x\n", c, s, ptr, i1, i1, i3, i1, i1);
    ft_printf("count = %d\n\n", count);

    count = printf("char: %c\nstring: %s\npointer: %p\ndecimal: %d\nint: %i\nunsigned decimal: %u\nhex uppercase: %X\nhex lowercase: %x\n", c, s, ptr, i1, i1, i3, i1, i1);
    printf("count = %d\n\n", count);

    return (0);
}