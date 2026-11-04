/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbucher <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 12:43:29 by vbucher           #+#    #+#             */
/*   Updated: 2026/11/03 15:43:55 by vbucher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
*/
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int	main(int	argc, char**	argv)
{
	argc = 2;
	ft_isalpha(*argv[argc - 1]);
}
*/
