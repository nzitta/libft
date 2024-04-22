/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nireher <nireher-@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 07:48:42 by nireher           #+#    #+#             */
/*   Updated: 2023/11/06 07:51:49 by nireher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	This function erases *s data by overwriting n zeros
*/

void	ft_bzero(void *s, size_t n)
{
	ft_memset((unsigned char *)s, 0, n);
}
