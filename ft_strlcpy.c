/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nireher <nireher-@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 05:16:36 by nireher           #+#    #+#             */
/*   Updated: 2023/11/13 21:02:13 by nireher-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* this function copies a string and guarantee null termination
   it returns the length of the source string */

size_t	ft_strlcpy(char *dest, const char *source, size_t size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (source[i] && i < size - 1)
		{
			dest[i] = source[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(source));
}
