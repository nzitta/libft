/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nireher <nireher-@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 13:25:08 by nireher           #+#    #+#             */
/*   Updated: 2024/02/29 13:59:41 by nireher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*new_node;

	temp = *lst;
	if (!temp)
		return ;
	while (temp)
	{
		new_node = temp->next;
		del(temp->content);
		free(temp);
		temp = new_node;
	}
	*lst = NULL;
}

// static void	del_function(void *content)
// {
// 		printf("%c\n", *(char *)(content));
// }

// int	main(void)
// {
// 	t_list	*head = NULL;

// 	char	a = 'x';
// 	char	b = 'z';
// 	char	c = 'e';

// 	t_list	*pr1 = ft_lstnew(&a);
// 	t_list	*pr2 = ft_lstnew(&b);
// 	t_list	*pr3 = ft_lstnew(&c);
// 	ft_lstadd_back(&head, pr1);
// 	ft_lstadd_back(&head, pr2);
// 	ft_lstadd_back(&head, pr3);

// 	ft_lstclear(&head, del_function);

// 	return (0);
// }