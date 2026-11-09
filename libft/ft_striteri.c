/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbucher <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 14:06:31 by vbucher           #+#    #+#             */
/*   Updated: 2026/11/09 12:11:26 by vbucher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_striteri(char *s, void (*f) (unsigned int, char*))
{
	int i;

	i =0;
	while (s[i] != '\0')
	{
		f(i, s);
		i++;
	}
	return s;
}
/*
void fct(unsigned int i, char *c)
{

	c[i] += 1;
}

#include <stdio.h>
int	main()
{
	char	test[5] = "abcd";

	printf("%s\n", ft_striteri(test, &fct));
}
*/
