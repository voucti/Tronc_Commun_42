/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbucher <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 13:49:56 by vbucher           #+#    #+#             */
/*   Updated: 2026/11/09 14:46:21 by vbucher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f) (void *), void (*del) (void *))
{
	t_list	*tempo;
	t_list	*tempn;
	t_list	*new;

	tempo->next = lst;
	new = f(lst);
	tempn->next = new;
	while (tempo->next->next != NULL)
	{
		tempo->next = tempo->next->next;
		tempn->next->next = f(tempo->next);
		tempo->next = tempo->next->next;
	}
	return new;
}
