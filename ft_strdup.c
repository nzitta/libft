/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nireher <nireher-@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 18:56:20 by nireher           #+#    #+#             */
/*   Updated: 2023/11/28 02:21:00 by nireher-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*mine_strlcpy(char *dest, const char *source)
{
	unsigned int	i;
	size_t			size;

	i = 0;
	size = ft_strlen(source);
	if (size >= 0)
	{
		while (source[i] && i < size)
		{
			dest[i] = source[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (dest);
}

char	*ft_strdup(const char *s)
{
	char	*s1;

	s1 = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!s1)
		return (NULL);
	return (mine_strlcpy(s1, s));
}
