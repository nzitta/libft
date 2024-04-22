/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nireher <nireher-@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 13:11:05 by nireher           #+#    #+#             */
/*   Updated: 2024/02/29 13:11:50 by nireher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

t_list	*ft_lstlast(t_list	*lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

// int	main(void)
// {
// 	// creation of an empty list
// 	t_list	*head = NULL;
// 	//variables
// 	int	value = 3;
// 	int	value1 = 2;
// 	int	value2 = 1;
// 	//nodes creation
// 	t_list	*first_node = ft_lstnew(&value);
// 	t_list	*second_node = ft_lstnew(&value1);
// 	t_list	*third_node = ft_lstnew(&value2);
// 	//push
// 	ft_lstadd_front(&head, first_node);
// 	ft_lstadd_front(&head, second_node);
// 	ft_lstadd_front(&head, third_node);
// 	//obtain the last node
// 	t_list	*lastNode = ft_lstlast(head);
// 	if (lastNode != NULL)
// 		printf("El último elemento es: %d\n", *(int *)lastNode->content);
// 	else
// 		printf("miau");
// 	return (0);
// }