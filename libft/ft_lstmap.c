/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbucher <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 13:49:56 by vbucher           #+#    #+#             */
/*   Updated: 2026/11/12 17:53:07 by vbucher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f) (void *), void (*del) (void *))
{
	t_list	*temp;
	t_list	*new;
	t_list	*content;

	if (!lst || !f || !del)
		return (NULL);
	new = NULL;
	while (lst)
	{
		content = f(lst->content);
		if (!content)
			return (ft_lstclear(&new, del), NULL);
		temp = ft_lstnew(content);
		if (!temp)
		{
			del(content);
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, temp);
		lst = lst->next;
	}
	return (new);
}

/*
void	*f(void *x)
{
	char	*c;

	c = (char *)x.content;
	c++;
	return x;
}
*/
/*
#include <stdio.h>
int	main()
{
	t_list *lst;
	int	i;
	char	c[] = "a";
	t_list	*temp;

	i = 0;
	lst = ft_lstnew(c);
	temp = ft_lstnew(NULL);
	temp = lst;
	while (i < 3)
	{
		c[0]  = c[0] + 1;
		ft_lstadd_back(&lst, ft_lstnew(c));
		i++;
	}
	while (temp != NULL)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
}
*/
