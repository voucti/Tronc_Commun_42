/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbucher <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 14:06:31 by vbucher           #+#    #+#             */
/*   Updated: 2026/11/12 12:04:19 by vbucher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f) (unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void fct(unsigned int i, char *c)
{
	i = 1;
	*c = (char)(*c + 1);
}

#include <stdio.h>
int	main()
{
	char	test[5] = "abcd";

	ft_striteri(test, &fct);
	printf("%s\n", test);
}
*/
