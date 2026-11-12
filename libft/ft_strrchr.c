/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbucher <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 14:06:56 by vbucher           #+#    #+#             */
/*   Updated: 2026/11/11 15:34:44 by vbucher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	int		temp;

	c = c - ((c >= 256) * 256 * (c / 256));
	temp = -1;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c - ((s[i] < 0 && c > 0) * 256))
			temp = i;
		i++;
	}
	if (c == '\0')
		return ((char *)s + i);
	if (temp != -1)
		return ((char *)s + temp);
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>
int	main()
{
	int c = 200;
	char	*s = "Hw\310ufh";

	printf("%s\n", ft_strrchr(s, c));
	printf("%s\n", strrchr(s, c));
}
*/
