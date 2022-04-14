/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 03:05:18 by gasouza           #+#    #+#             */
/*   Updated: 2022/04/14 03:48:23 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*ft_strcpy(char *dst, const char *src);

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*new_str;

	new_str = NULL;
	len = ft_strlen(s);
	if (len > 0)
	{
		new_str = malloc(len * sizeof(char));
		if (new_str != NULL)
			ft_strcpy(new_str, s);
	}
	return (new_str);
}

static char	*ft_strcpy(char *dst, const char *src)
{
	size_t	index;

	index = 0;
	while (src[index])
	{
		dst[index] = src[index];
		index++;
	}
	dst[index] = '\0';
	return (dst);
}
