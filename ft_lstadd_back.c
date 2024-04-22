/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nireher <nireher-@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:59:02 by nireher           #+#    #+#             */
/*   Updated: 2024/04/22 13:01:22 by nireher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	temp = *lst;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
}

// int	main(void)
// {
// 	// creation of an empty list
// 	t_list	*head = NULL;

// 	//variables
// 	int	value = 3;
// 	int	value1 = 2;
// 	int	value2 = 1;
// 	int	valueFinal = 4;

// 	//nodes creation
// 	t_list	*first_node = ft_lstnew(&value);
// 	t_list	*second_node = ft_lstnew(&value1);
// 	t_list	*third_node = ft_lstnew(&value2);
// 	t_list	*final_node = ft_lstnew(&valueFinal);

// 	//push
// 	ft_lstadd_front(&head, first_node);
// 	ft_lstadd_front(&head, second_node);
// 	ft_lstadd_front(&head, third_node);

// 	//add a last node
// 	ft_lstadd_back(&head, final_node);

// 	//obtain the last node
// 	t_list	*lastNode = ft_lstlast(head);
// 	if (lastNode != NULL)
// 		printf("El último elemento es: %d\n", *(int *)lastNode->content);
// 	else
// 		printf("miau");
// 	return (0);
// }