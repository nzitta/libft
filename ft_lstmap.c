/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nireher <nireher-@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:02:23 by nireher           #+#    #+#             */
/*   Updated: 2024/04/22 13:07:44 by nireher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*content;
	t_list	*begin;
	t_list	*newlist;

	if (!f || !del)
		return (NULL);
	begin = 0;
	while (lst)
	{
		content = (*f)(lst->content);
		newlist = ft_lstnew(content);
		if (!newlist)
		{
			(*del)(content);
			ft_lstclear(&begin, (del));
			return (0);
		}
		ft_lstadd_back(&begin, newlist);
		lst = lst->next;
	}
	return (begin);
}
