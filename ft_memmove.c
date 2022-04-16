/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 21:07:56 by gasouza           #+#    #+#             */
/*   Updated: 2022/04/16 10:48:05 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	index;
	char	*buffer;
	char	*tmp_dst;
	char	*tmp_src;

	if (n != 0)
	{
		tmp_dst = (char *) dst;
		tmp_src = (char *) src;
		buffer = ft_calloc(n, sizeof(char));
		ft_memcpy(buffer, tmp_src, n);
		index = n;
		while (index > 0)
		{
			index--;
			tmp_dst[index] = buffer[index];
		}
	}
	return (dst);
}
