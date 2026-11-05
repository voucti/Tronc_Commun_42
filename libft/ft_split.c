/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbucher <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 12:29:05 by vbucher           #+#    #+#             */
/*   Updated: 2026/11/05 14:04:26 by vbucher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	tot_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != '\0' && s[i + 1] != c)
			count += 1;
		i++;
	}
	return count;
}

int	sec_count(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return i;
}

void *error(char **split, int n)
{
	int	i;

	i = 0;
	while (i <= n)
		free(split[i]);
	free(split);
	return NULL;
}

char **ft_split(char const *s, char c)
{
	char **split;
	int	n;
	int i;
	int j;

	n = tot_count(s, c);
	split = malloc(sizeof(char *) * (n + 1));
	if (split == NULL)
		return NULL;
	i = 0;
	j = 0;
	while (i < n)
	{
		while (!(s[j - 1] == c && s[j] != c))
			j++;
		split[i] = malloc(sec_count(&s[j], c) + 1);
		if (split[i] == NULL)
			return (error(split, n));
		ft_strlcpy(split[i], &s[j], sec_count(&s[j], c) + 1);
		i++;
		j += sec_count(&s[j], c) + 1;
	}
	split[i] = NULL;
	return split;
}

/*
#include <stdio.h>
int	main()
{
	int	i = 0;
	char **test = ft_split("//wow//abcdef/efewf///", '/');
	while (i <= 3)
	{
		printf("%s\n", test[i]);
		i++;
	}
}
*/
