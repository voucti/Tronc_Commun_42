/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbucher <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 15:22:31 by vbucher           #+#    #+#             */
/*   Updated: 2026/11/11 16:08:30 by vbucher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if ((unsigned char)little[0] == '\0')
		return ((char *)big);
	while (((len - i) >= ft_strlen(little)) && (unsigned char)big[i] != '\0')
	{
		j = 0;
		while ((unsigned char)big[i + j] == (unsigned char)little[j])
		{
			j++;
			if ((unsigned char)little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>
int	main()
{
	char	b[] = "Hello World";
	char	l[] = "";
	size_t	s = 11;

	printf("%s\n", ft_strnstr(b, l, s));
	printf("%s\n", strstr(b, l));
}
*/
/*
 If little is an empty string, big is returned; if little occurs nowhere in big,
 NULL is returned; otherwise a pointer to the first char‐
     acter of the first occurrence of little is returned.
*/