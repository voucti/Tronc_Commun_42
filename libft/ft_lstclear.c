/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbucher <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 13:32:01 by vbucher           #+#    #+#             */
/*   Updated: 2026/11/09 13:45:48 by vbucher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del) (void*))
{
	if (*lst-next != NULL)
	{
		lst = *lst->next;
		ft_lstclear(lst, del);
		free(*lst);
	}
	lst = NULL;
}
