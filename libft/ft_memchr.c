/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbucher <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 14:46:25 by vbucher           #+#    #+#             */
/*   Updated: 2026/11/04 14:59:22 by vbucher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (*str != 0 && n > 0)
	{
		if (*str == c)
			return str;
		str++;
		n--;
	}
	if (*str == c)
		return str;
	return NULL;
}

/*
#include <stdio.h>
int	main()
{
	printf("%s\n", (char *)ft_memchr("quf96gefeq", 0, 11));
}
*/
