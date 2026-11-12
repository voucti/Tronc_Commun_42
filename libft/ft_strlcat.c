/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbucher <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 12:06:06 by vbucher           #+#    #+#             */
/*   Updated: 2026/11/11 13:27:25 by vbucher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	sized;
	size_t	i;

	i = 0;
	sized = 0;
	while (sized < size && dst[sized] != '\0')
		sized++;
	if (size <= sized)
		return (size + ft_strlen(src));
	while (src[i] != '\0' && (sized + i) < (size - 1))
	{
		dst[sized + i] = src[i];
		i++;
	}
	dst[sized + i] = '\0';
	return (sized + ft_strlen(src));
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
