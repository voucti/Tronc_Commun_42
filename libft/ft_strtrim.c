/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbucher <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 11:02:07 by vbucher           #+#    #+#             */
/*   Updated: 2026/11/11 10:12:38 by vbucher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	unsearch(char const *str, char const *set)
{
	int i;
	int	j;
	int	test;

	i = 0;
	while (str[i] != '\0')
	{
		test = 0;
		j = 0;
		while (set[j] != '\0')
		{
			if (set[j] == str[i])
				test = 1;
			j++;
		}
		if (test == 0)
			return i;
		i++;
	}
	return i;
}

static int	rev_unsearch(char const *str, char const *set)
{
	int i;
	int	j;
	int	test;

	i = ft_strlen(str) - 1;
	while (i >= 0)
	{
		test = 0;
		j = 0;
		while (set[j] != '\0')
		{
			if (set[j] == str[i])
				test = 1;
			j++;
		}
		if (test == 0)
			return i + 1;
		i--;
	}
	return i + 1;
}


char *ft_strtrim(char const *s1, char const *set)
{
	char *trim;
	int	start;
	int	len;

	start = unsearch(s1, set);
	len = rev_unsearch(s1, set) - start;
	trim = ft_substr(s1, start, len);
	return trim;
}

/*
#include <stdio.h>
int	main()
{
	printf("%s\n", ft_strtrim("ab  aba12457anana  a", "ab"));
}
*/
