/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbucher <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 12:43:29 by vbucher           #+#    #+#             */
/*   Updated: 2026/11/03 15:43:22 by vbucher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
*/
int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 61 && c <= 122) ||
		(c >= 48 && c <= 57))
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
