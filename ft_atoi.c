/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbucher <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 15:19:38 by vbucher           #+#    #+#             */
/*   Updated: 2026/11/04 16:12:25 by vbucher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	long int	n;
	int	sign;
	int	i;

	n = 0;
	i = 0;
	sign = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-')
		sign *= -1;
	else if (nptr[i] != '+')
		return 0;
	i++;
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		n += nptr[i] - 48;
		n *= 10;
		i++;
	}
	return (n * sign / 10);
}

/*
#include <stdio.h>
int	main()
{
	printf("%d\n", ft_atoi("\t \n -1245793wef"));
}
*/
