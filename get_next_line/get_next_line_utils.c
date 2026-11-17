/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbucher <vbucher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 13:27:03 by vbucher           #+#    #+#             */
/*   Updated: 2026/11/17 14:11:22 by vbucher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_memcpy(void *dest, const void *src, int n)
{
	int			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
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
    free(s1);
    free(s2);
	return (res);
}

int	indchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

char	*ft_substr(char *s, int start, int len, int mode)
{
	char	*sub;

	if (start > ft_strlen(s))
	{
		sub = malloc(1);
		len = 0;
	}
	else if (len > (ft_strlen(s) - start))
	{
		sub = malloc(ft_strlen(s) - start + 1);
		len = ft_strlen(s) - start;
	}
	else
		sub = malloc(len + 1);
	if (sub == NULL)
		return (NULL);
	ft_memcpy(sub, &s[start], len);
	sub[len] = '\0';
	if (mode == 1)
		free(s);
	return (sub);
}