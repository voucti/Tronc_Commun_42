/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbucher <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 09:58:42 by vbucher           #+#    #+#             */
/*   Updated: 2026/11/05 10:53:46 by vbucher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *sub;

	sub = malloc(len + 1);
	if (sub == NULL)
		return NULL;
	ft_memcpy(sub, &s[start], len);
	sub[len] = '\0';
	return sub;
}

/*
#include <stdio.h>
int	main()
{
	char test[12] = "abcdefghijk";
	printf("%s\n", ft_substr(test, 3, 4));
}
*/
