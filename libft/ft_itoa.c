/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbucher <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 15:34:54 by vbucher           #+#    #+#             */
/*   Updated: 2026/11/12 11:46:35 by vbucher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	powten(int p)
{
	int	n;

	n = 10;
	if (p == 0)
		return 1;
	while (p > 1)
	{
		n *= 10;
		p--;
	}
	return n;
}

static char	*fill_number(char *out, long int nb, int i, int j)
{
	while (i >= 0)
	{
		out[j] = nb / powten(i) + 48;
		nb -= nb / powten(i) * powten(i);
		j++;
		i--;
	}
	out[j] = '\0';
	return out;
}

char	*ft_itoa(int n)
{
	char	*out;
	int	i;
	int	j;
	int	sign;
	long int	nb;

	nb = n;
	i = 0;
	sign = 1 + ((nb < 0) * -2);
	nb *= sign;
	j = (sign < 0);
	while (nb / powten(i) > 9)
		i++;
	out = malloc(i + 2 + (sign < 0));
	if (out == NULL)
		return NULL;
	out[0] = (sign < 0) * 45;
	return (fill_number(out, nb, i, j));
}
/*
#include <stdio.h>
int	main()
{
	printf("%s\n", ft_itoa(0));
}
*/
