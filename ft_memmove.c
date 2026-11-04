/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbucher <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 13:52:04 by vbucher           #+#    #+#             */
/*   Updated: 2026/11/04 11:35:56 by vbucher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	while (i < n && d[i] != 0 && s[i] != 0)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>
int	main()
{
	char chaine[12] = "destination";
	char	source[18] = "sourcesourcesource";

	ft_memmove(chaine, source, 20);
	printf("%s\n", chaine);
}
*/
