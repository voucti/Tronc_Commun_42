/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbucher <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 14:06:56 by vbucher           #+#    #+#             */
/*   Updated: 2026/11/11 14:33:36 by vbucher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	c = c - ((c >= 256) * 256 * (c / 256));
	while (*s != '\0')
	{
		if (*s == c - ((*s < 0 && c > 0) * 256))
			return (char *)s;
		s++;
	}
	if (c == '\0')
		return (char *)s;
	else
		return NULL;
}
/*
#include <string.h>
#include <stdio.h>
int	main()
{
//	int c = 200;
	char	*s = "te\310ste";

	printf("%s\n", ft_strchr(s,200));
	printf("%s\n", strchr(s,200));
}
*/
