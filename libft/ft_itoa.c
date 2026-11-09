/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbucher <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 15:34:54 by vbucher           #+#    #+#             */
/*   Updated: 2026/11/09 16:04:37 by vbucher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*itoa(int n)
{
	char	*out;
	int	i;
	int temp;

	i = 0;
	temp = n;
	while (temp i != 0)
	{
		temp /= 10;
		i++;
	}
	out = malloc(n + (n < 0) + 1);
	if (out == NULL)
		return NULL;
	if (n < 0
	while (n < 0)
	{
		
}
