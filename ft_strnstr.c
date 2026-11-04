/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbucher <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 15:22:31 by vbucher           #+#    #+#             */
/*   Updated: 2026/11/04 15:48:20 by vbucher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < len)
	{
		j = 0;
		while (big[i + j] == little[j])
			j++;
		if (little[j] == '\0')
			return (char *) &big[i];
		i++;
	}
	if (big[i] == '\0' || ft_strlen(little) == 0)
		return (char *) big;
	return NULL;
}

/*
#include <stdio.h>
int	main()
{
	printf("%s\n", ft_strnstr("ecole 42 mulhouse", "42", 8));
}

// If little is an empty string, big is returned; if little occurs nowhere in big, NULL is returned; otherwise a pointer to the first char‐
//     acter of the first occurrence of little is returned.
*/
