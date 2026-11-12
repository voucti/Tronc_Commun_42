/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbucher <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 13:32:01 by vbucher           #+#    #+#             */
/*   Updated: 2026/11/12 12:02:36 by vbucher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del) (void*))
{
	t_list	*temp;

	if (*lst == NULL)
		return ;
	temp = *lst;
	if (temp->next != NULL)
		ft_lstclear(&(temp->next), del);
	del((*lst)->content);
	free(*lst);
	*lst = NULL;
}
