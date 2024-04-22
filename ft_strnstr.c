/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nireher <nireher-@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 21:51:27 by nireher           #+#    #+#             */
/*   Updated: 2023/11/23 04:21:33 by nireher-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *  This function locates *s1 on *s2
 *  not more than len characters are searched
 */

char	*ft_strnstr(const char *big, const char *tiny, size_t len)
{
	const size_t	n = ft_strlen(tiny);
	size_t			i;

	if (!n)
		return ((char *)big);
	while (*big && len >= n)
	{
		i = 0;
		while (*big == *tiny && *big && *tiny)
		{
			tiny++;
			big++;
			i++;
		}
		if (!(*tiny))
			return ((char *)big - i);
		big++;
		big -= i;
		len--;
		tiny -= i;
	}
	return (0);
}
