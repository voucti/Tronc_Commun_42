/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbucher <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 09:58:42 by vbucher           #+#    #+#             */
/*   Updated: 2026/11/11 16:57:06 by vbucher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *sub;

	if (start > ft_strlen(s))
	{
		sub = malloc(1);
		len = 0;
	}
	else if (len > (ft_strlen(s) - start))
	{
		sub = malloc(ft_strlen(s) - start + 1);
		len = ft_strlen(s) - start;
	}
	else
		sub = malloc(len + 1);
	if (sub == NULL)
		return NULL;
	ft_memcpy(sub, &s[start], len);
	sub[len] = '\0';
	return sub;
}

/*
#include <stdio.h>
int	main()
{
	printf("%s\n", ft_substr("hola", 0, SIZE_MAX));
}
*/
