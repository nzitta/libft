/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nireher <nireher-@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 10:23:32 by nireher           #+#    #+#             */
/*   Updated: 2024/02/29 13:42:14 by nireher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_lstsize(t_list *list)
{
	int	i;

	i = 0;
	while (list)
	{
		i++;
		list = list->next;
	}
	return (i);
}
// int	main(void)
// {
// 	// creation of an empty list
// 	t_list	*head = NULL;

// 	//variables
// 	int	value = 1;
// 	int	value1 = 2;
// 	char	value2 = 'A';

// 	//nodes creation
// 	t_list	*first_node = ft_lstnew(&value);
// 	t_list	*second_node = ft_lstnew(&value1);
// 	t_list	*third_node = ft_lstnew(&value2);

// 	//push
// 	ft_lstadd_front(&head, first_node);
// 	ft_lstadd_front(&head, second_node);
// 	ft_lstadd_front(&head, third_node);
// 	printf("El número de elementos es %d\n", ft_lstsize(head));
// 	printf("%d\n", *(int *)first_node->content);
// 	printf("%d\n", *(int *)second_node->content);
// 	printf("%c\n", *(char *)third_node->content);
// 	return (0);
// }