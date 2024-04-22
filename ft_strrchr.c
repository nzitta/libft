/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nireher <nireher-@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:18:08 by nireher           #+#    #+#             */
/*   Updated: 2023/11/21 18:18:32 by nireher-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	b;
	size_t			len;

	b = c;
	len = ft_strlen(s);
	if (!*s && *s != b)
		return (NULL);
	if (!*s && *s == b)
		return ((char *)s);
	s += len;
	while (len > 0 && *s != b)
	{
		len--;
		s--;
	}
	if (*s == b)
		return ((char *)s);
	return (0);
}
