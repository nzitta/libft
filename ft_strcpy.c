/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nireher <nireher-@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 03:57:53 by nireher           #+#    #+#             */
/*   Updated: 2023/11/18 04:33:30 by nireher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, char *src)
{
	char	*original;

	original = dest;
	if (!dest && !src)
		return (0);
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (original);
}
