/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nireher <nireher-@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 19:37:07 by nireher           #+#    #+#             */
/*   Updated: 2023/11/22 20:38:31 by nireher-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * This function scans n bytes of the mem  pointed to by s for the first c 
 * c and the bytes of the memory pointed to by s are taken as unsigned char
 */

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*a;
	unsigned char		m;

	a = (unsigned char *)s;
	m = (char)c;
	while (n--)
	{
		if (*(a++) == m)
			return ((char *)(--a));
	}
	return (0);
}
