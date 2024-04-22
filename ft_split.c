/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nireher <nireher-@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:16:13 by nireher           #+#    #+#             */
/*   Updated: 2023/11/29 19:22:39 by nireher-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	if (!s[i])
		return (0);
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			i++;
			count++;
		}
		else
			i++;
	}
	return (count);
}

static int	len_words(char const *s, char c, int i)
{
	int	len;

	len = 0;
	while (s[i] != '\0' && s[i] == c)
		i++;
	while (s[i] != '\0' && s[i] != c)
	{
		i++;
		len++;
	}
	return (len);
}

static void	*free_word(char **array, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;
	int		j;
	int		index;

	array = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!array)
		return (NULL);
	i = 0;
	j = 0;
	while (i < count_words(s, c))
	{
		index = 0;
		while (s[j] != '\0' && s[j] == c)
			j++;
		array[i] = malloc(sizeof(char) * len_words(s, c, j) + 1);
		if (!array[i])
			return (free_word(array, i));
		while (s[j] != '\0' && s[j] != c)
			array[i][index++] = s[j++];
		array[i][index] = '\0';
		i++;
	}
	array[i] = NULL;
	return (array);
}
