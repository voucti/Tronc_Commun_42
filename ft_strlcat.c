/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbucher <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 12:06:06 by vbucher           #+#    #+#             */
/*   Updated: 2026/11/04 13:57:13 by vbucher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int sized;
	int	sizes;
	int	fill;
	int	i;

	i = 0;
	sized = ft_strlen(dst);
	sizes = ft_strlen(src);
	fill = size - sized;
	if (fill <= 0)
		return (sized + sizes);
	while (i < (int)size - 1 - sized && src[i] != '\0')
	{
		dst[sized + i] = src[i];
		i++;
	}
	dst[sized + i] = '\0';
	return (sized + sizes);
}

/*
#include <stdio.h>

int	main()
{
	char	d[15] = "destination";
	char	s[7] = "source";

	size_t	si = ft_strlcat(d, s, 15);
	printf("%d\n", (int)si);
	printf("%s\n", d);
}
*/
