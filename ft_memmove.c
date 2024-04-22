/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nireher <nireher-@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 01:20:00 by nireher           #+#    #+#             */
/*   Updated: 2023/11/21 13:30:58 by nireher-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 	
 *  	this function is similar to memcpy, but handles overlapping
 *  	which occur when the source mem block is placed before the dest 
*/

void	*ft_memmove(void *dest, const void *source, size_t len)
{
	unsigned char		*dst;
	unsigned const char	*src;

	dst = (unsigned char *)dest;
	src = (unsigned const char *)source;
	if (!dest && !source)
		return (NULL);
	if (dest <= source)
		ft_memcpy(dest, source, len);
	else
	{
		dst += len;
		src += len;
		while (len--)
		{
			*(--dst) = *(--src);
		}
	}
	return (dest);
}
