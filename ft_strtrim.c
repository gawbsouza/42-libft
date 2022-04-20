/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 08:27:16 by gasouza           #+#    #+#             */
/*   Updated: 2022/04/20 09:16:28 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_charinstr(char c, const char *str)
{
	while (*str && *str != c)
		str++;
	return (*str == c);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*str;
	char	*reverse_end;

	str = ft_strdup(s1);
	if (!str)
		return (NULL);
	while (*str && ft_charinstr(*str, set))
		str++;
	reverse_end = str;
	while (*str)
		str++;
	str--;
	while (str >= reverse_end && ft_charinstr(*str, set))
		str--;
	str++;
	*str = '\0';
	return (reverse_end);
}
