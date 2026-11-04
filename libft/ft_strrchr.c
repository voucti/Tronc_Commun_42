/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbucher <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 14:06:56 by vbucher           #+#    #+#             */
/*   Updated: 2026/11/04 14:31:41 by vbucher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	s += i;
	while (i-- > 0)
	{
		if (*s == c)
			return (char *)s;
		s--;
	}
	return NULL;
}

/*
#include <stdio.h>
int	main()
{
	int c = 'f';
	char	s[12] = "wiefg6wefew";

	printf("%s\n", ft_strrchr(s, c));
}
*/
