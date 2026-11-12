/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbucher <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 14:46:25 by vbucher           #+#    #+#             */
/*   Updated: 2026/11/11 15:43:11 by vbucher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;
	char	cc;

	i = 0;
	str = (char *)s;
	cc = (char) c;
	while (i < n)
	{
		if (*str == cc)
			return (str);
		str++;
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>
int	main()
{
	printf("%s\n", (char *)ft_memchr("quf96gefeq", 0, 11));
}
*/
