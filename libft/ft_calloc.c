/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbucher <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 10:00:32 by vbucher           #+#    #+#             */
/*   Updated: 2026/11/05 10:32:38 by vbucher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t memb, size_t size)
{
	unsigned char *ptr;

	if (memb < 1 || size < 1)
		return NULL;
	if (memb * size > 2147483647)
		return NULL;
	ptr = malloc(memb * size);
	if (ptr == NULL)
		return NULL;
	ft_bzero(ptr, memb * size);
	return ptr;
}

/*
#include <stdio.h>
int	main()
{
	printf("%s\n", (char *) ft_calloc(4, 1));
}
*/
