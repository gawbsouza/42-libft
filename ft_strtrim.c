/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 08:27:16 by gasouza           #+#    #+#             */
/*   Updated: 2022/04/20 11:07:33 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	in_array(char c, const char *str)
{
	while (*str && *str != c)
		str++;
	return (*str == c);
}

static void	trim_left(char *str, const char *set)
{
	size_t	i;

	while (*str && in_array(*str, set))
	{
		i = 0;
		while (str[i])
		{
			str[i] = str[i + 1];
			i++;
		}
	}
}

static void	trim_right(char *str, const char *set)
{
	char	*last_char;

	last_char = str;
	while (*last_char)
		last_char++;
	last_char--;
	while (last_char > str && in_array(*last_char, set))
	{
		*last_char = '\0';
		last_char--;
	}
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*str;

	str = ft_strdup(s1);
	if (!str)
		return (NULL);
	trim_left(str, set);
	trim_right(str, set);
	return (str);
}
