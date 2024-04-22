/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nireher <nireher-@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 07:11:07 by nireher           #+#    #+#             */
/*   Updated: 2023/11/21 13:23:21 by nireher-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	total_len;
	size_t	i;

	dst_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	total_len = dst_len + src_len;
	i = dst_len;
	if (size <= dst_len)
		return (size + src_len);
	else
	{
		while (i < size - 1 && *src)
		{
			dest[i++] = *src++;
		}
	}
	dest[i] = '\0';
	return (total_len);
}
