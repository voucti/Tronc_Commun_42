/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbucher <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 14:06:56 by vbucher           #+#    #+#             */
/*   Updated: 2026/11/04 14:22:53 by vbucher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (char *)s;
		s++;
	}
	if (c == '\0')
		return (char *)s;
	else
		return NULL;
}
/*
#include <stdio.h>
int	main()
{
	int c = 0;
	char	s[12] = "wiefg6wefew";

	printf("%s\n", ft_strchr(s, c));
}
*/
