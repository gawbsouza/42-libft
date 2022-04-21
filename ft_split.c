/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:13:01 by gasouza           #+#    #+#             */
/*   Updated: 2022/04/21 09:23:41 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	substrs_count(const char *s, char c)
{
	size_t	count;

	count = 1;
	while (*s)
	{
		if (*s == c && *(s + 1) != c && *(s + 1))
			count++;
		s++;
	}
	return (count);
}

static const char	*trim_left(const char *s, char c)
{
	while (*s && *s == c)
		s++;
	return (s);
}

static size_t	delimiter_pos(const char *s, char c)
{
	size_t	walked;

	walked = 0;
	while (*s && *s != c)
	{
		s++;
		walked++;
	}
	return (walked);
}

char	**ft_split(const char *s, char c)
{
	size_t	size;
	size_t	i;
	size_t	walked;
	char	**array;

	size = substrs_count(s, c);
	array = malloc(sizeof(char **) * (size + 1));
	if (!array)
		return (NULL);
	i = 0;
	while (i < size && *s)
	{
		s = trim_left(s, c);
		if (*s)
		{
			walked = delimiter_pos(s, c);
			array[i] = ft_substr(s, 0, walked);
			s += walked;
		}
		i++;
	}
	array[i] = NULL;
	return (array);
}
