/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbucher <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 10:54:05 by vbucher           #+#    #+#             */
/*   Updated: 2026/11/05 11:01:49 by vbucher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *res;

	res = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (res == NULL)
		return NULL;
	ft_memcpy(res, s1, ft_strlen(s1));
	ft_strlcat(res, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	return res;
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
