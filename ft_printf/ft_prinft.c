/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prinft.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbucher <vbucher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/25 12:53:59 by vbucher           #+#    #+#             */
/*   Updated: 2026/11/27 18:35:28 by vbucher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	routes(va_list	args, char c, int	*count)
{
	if (c == 'c')
		ft_putchar(va_arg(args, int), count);
	if (c == 's')
		ft_putstr(va_arg(args, char*), count);
	if (c == 'd' || c == 'i' || c == 'u')
		ft_putnbr(va_arg(args, int), count);
	if (c == 'x')
		puthexa(va_arg(args, int), 1, count);
	if (c == 'p')
		putadr(va_arg(args, uintptr_t), count);
	if (c == 'X')
		puthexa(va_arg(args, int), 0, count);
	if (c == '%')
		ft_putstr("%", count);
}

int ft_printf(const char *s, ...)
{
	va_list		args;
	int			count;
	int			i;

	va_start(args, s);
	i = -1;
	count = 0;
	while (i++, s[i])
	{
		if (s[i] == '%')
			routes(args, s[++i], &count);
		else
			ft_putchar(s[i], &count);
	}
	return (count);
}
/*
#include <stdio.h>
int	main()
{
	char	*s = "string";
	char	*p = NULL;
	
	ft_printf("%c | %s | %p | %d | %i | %u | %x | %X | %%\n", 't', s, p, 5, -24578, 0, 24578, 24578);
	printf("%c | %s | %p | %d | %i | %u | %x | %X | %%\n", 't', s, p, 5, -24578, 0, 24578, 24578);
}
*/