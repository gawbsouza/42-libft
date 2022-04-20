/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 14:41:32 by gasouza           #+#    #+#             */
/*   Updated: 2022/04/20 14:59:59 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	size;
	size_t	index_new;
	size_t	index_old;
	char	*new;

	size = ft_strlen(s1);
	size += ft_strlen(s2);
	new = malloc(size * sizeof(char));
	if (!new)
		return (NULL);
	index_old = 0;
	while (s1[index_old])
	{
		new[index_old] = s1[index_old];
		index_old++;
	}
	index_new = index_old;
	index_old = 0;
	while (s2[index_old])
	{
		new[index_new + index_old] = s2[index_old];
		index_old++;
	}
	return (new);
}
