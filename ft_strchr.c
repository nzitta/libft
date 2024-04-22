/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nireher <nireher-@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 06:16:46 by nireher           #+#    #+#             */
/*   Updated: 2023/11/21 15:58:41 by nireher-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
		This function returns a pointer to the first occurrence of 'c' on *s 
 */

char	*ft_strchr(const char *s, int c)
{
	unsigned char	a;

	a = c;
	while (*s && *s != a)
		s++;
	if (*s == a)
		return ((char *)s);
	return (0);
}
