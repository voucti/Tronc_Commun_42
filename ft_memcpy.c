/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbucher <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 13:52:04 by vbucher           #+#    #+#             */
/*   Updated: 2026/11/04 11:11:46 by vbucher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;
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

/*
#include <stdio.h>
int	main()
{
	char chaine[20] = "destination";
	char	source[20] = "source";

	ft_memcpy(chaine, source, 4);
	printf("%s\n", chaine);
}
*/
