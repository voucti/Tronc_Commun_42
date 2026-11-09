/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbucher <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 13:45:58 by vbucher           #+#    #+#             */
/*   Updated: 2026/11/09 13:49:42 by vbucher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void(*f) (void *))
{
	t_list	*temp;

	temp->next = lst;
	while (temp->next->next != NULL)
	{
		f(&temp->next->content);
		temp->next = temp->next->next;
	}
}
