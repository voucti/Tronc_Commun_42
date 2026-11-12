/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbucher <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 12:06:06 by vbucher           #+#    #+#             */
/*   Updated: 2026/11/11 12:08:12 by vbucher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int		i;
	size_t	size_s;

	size_s = ft_strlen(src);
	if (size == 0)
		return (size_s);
	i = size - 1;
	while (i-- && size - 1 - i <= size_s)
		*dst++ = *src++;
	*dst = '\0';
	return (size_s);
}

/*
#include <stdio.h>
int	main()
{
	char	d[12] = "dest";
	char	s[12] = "sour";
	size_t	si = ft_strlcpy(d, s, ft_strlen(d) + 1);

	printf("%d\n", (int)si);
	printf("%s\n", d);
}
*/
