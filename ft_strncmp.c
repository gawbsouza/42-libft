/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 16:51:04 by gasouza           #+#    #+#             */
/*   Updated: 2022/04/11 18:57:21 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t c)
{
	size_t	index;

	index = 0;
	while (index < c)
	{
		if (!s1[index] || !s2[index])
			return (s1[index] - s2[index]);
		if (s1[index] != s2[index])
			return (s1[index] - s2[index]);
		index++;
	}
	return (0);
}
