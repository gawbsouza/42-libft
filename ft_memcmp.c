/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 21:55:28 by gasouza           #+#    #+#             */
/*   Updated: 2022/04/13 22:41:39 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			index;
	unsigned char	val1;
	unsigned char	val2;

	index = 0;
	while (index < n)
	{
		val1 = *((unsigned char *) s1 + index);
		val2 = *((unsigned char *) s2 + index);
		if (val1 != val2)
			return (val1 - val2);
		index++;
	}
	return (0);
}
