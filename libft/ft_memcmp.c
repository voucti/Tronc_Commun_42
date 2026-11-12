/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbucher <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 14:59:48 by vbucher           #+#    #+#             */
/*   Updated: 2026/11/11 16:11:27 by vbucher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*one;
	unsigned char	*two;
	size_t			i;

	one = (unsigned char *)s1;
	two = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (one[i] - two[i] != 0)
			return (one[i] - two[i]);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
int	main()
{
	printf("%d\n",ft_memcmp("abcdef", "abcde", 0));
}
*/
