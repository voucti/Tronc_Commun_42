/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbucher <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 14:06:31 by vbucher           #+#    #+#             */
/*   Updated: 2026/11/09 11:53:05 by vbucher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	int	len;
	char *res;
	int	i;

	i = 0;
	len = ft_strlen(s);
	res = malloc(len + 1);
	if (res == NULL)
		return NULL;
	while (i < len)
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return	res;
}
/*
char	fct(unsigned int i, char c)
{

	i += 1;
	c += 1;
	return c;
}

#include <stdio.h>
int	main()
{
	char	test[5] = "abcd";

	printf("%s\n", ft_strmapi(test, &fct));
}
*/
