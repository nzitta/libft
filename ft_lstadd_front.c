/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nireher <nireher-@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 23:46:43 by nireher           #+#    #+#             */
/*   Updated: 2024/02/04 07:36:58 by nireher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// int	main(void)
// {
// 	// empty list
// 	t_list	*head = NULL;

// 	// new nodes
// 	t_list	*first_node = ft_lstnew("1");
// 	t_list	*second_node = ft_lstnew("2");

// 	// adding nodes to the beggining of the list
// 	ft_lstadd_front(&head, first_node);
// 	ft_lstadd_front(&head, second_node);

// 	// printing the list
// 	printf("List content: \n");
// 	t_list	*current = head;
// 	while (current != NULL)
// 	{
// 		printf("%s\n", current->content);
// 		current = current->next;
// 	}
// 	printf("miau\n");
// 	return (0);
// }
