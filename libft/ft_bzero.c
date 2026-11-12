/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbucher <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 13:58:11 by vbucher           #+#    #+#             */
/*   Updated: 2026/11/04 11:05:28 by vbucher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*a;

	a = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		a[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>
int	main()
{
	char	test[20] = "qiufhe";

	ft_bzero(test, 3);
	printf("%s\n", test);
}
*/
