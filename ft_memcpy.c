/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nireher <nireher-@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 05:12:36 by nireher           #+#    #+#             */
/*   Updated: 2023/11/21 13:29:53 by nireher-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
		this function copies a block of memory from the source to the dest
		memcpy expects an address where it can find some data to copy
*/

void	*ft_memcpy(void *dest, const void *source, size_t n)
{
	unsigned char	*dst;
	unsigned char	*src;

	dst = (unsigned char *)dest;
	src = (unsigned char *)source;
	if (!dst && !src)
		return (NULL);
	while (n--)
		*dst++ = *src++;
	return (dest);
}
