/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbucher <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 13:15:19 by vbucher           #+#    #+#             */
/*   Updated: 2026/11/09 13:18:22 by vbucher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lift.h"

unsigned int ft_lstsize(t_list *lst)
{
	int	i;
	t_list	*temp;

	i = 0;
	temp = lst;
	while (temp->next->next != NULL)
	{
		i++;
		temp->next = temp->next->next;
	}
	return i;	
}
