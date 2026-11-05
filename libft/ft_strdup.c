/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbucher <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 10:32:51 by vbucher           #+#    #+#             */
/*   Updated: 2026/11/05 10:45:02 by vbucher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
	char *dup;
	int size;

	size = ft_strlen(s);
	dup = malloc(size + 1);
	if (dup == NULL)
		return NULL;
	ft_memcpy(dup, s, size + 1);
	return dup;
}

/*
#include <stdio.h>
int	main()
{
	char test[6] = "abcde";
	printf("%s\n", test);
}
*/
