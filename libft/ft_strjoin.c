/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbucher <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 10:54:05 by vbucher           #+#    #+#             */
/*   Updated: 2026/11/12 10:20:47 by vbucher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	res = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (res == NULL)
		return (NULL);
	while (s1[i] != 0)
	{
		res[i] = s1[i];
		i++;
	}
	while (s2[j] != 0)
	{
		res[i + j] = s2[j];
		j++;
	}
	res[i + j] = '\0';
	return (res);
}

/*
#include <stdio.h>
int	main()
{
	char one[4] = "abc";
	char two[5] = "defg";

	printf("%s\n", ft_strjoin(one, two));
}
*/
