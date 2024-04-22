/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nireher <nireher-@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 19:40:33 by nireher-          #+#    #+#             */
/*   Updated: 2023/11/29 19:53:51 by nireher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_number(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count = 1;
	while (n)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*new_string;
	long	temp;
	int		len;

	temp = n;
	len = count_number(temp);
	new_string = (char *)malloc(sizeof(char) * len + 1);
	if (!new_string)
		return (NULL);
	if (temp == 0)
		new_string[0] = '0';
	if (temp < 0)
	{
		temp *= -1;
		new_string[0] = '-';
	}
	new_string[len--] = '\0';
	while (temp)
	{
		new_string[len] = (temp % 10) + '0';
		temp = temp / 10;
		len--;
	}
	return (new_string);
}
