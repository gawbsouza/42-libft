/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 00:33:40 by gasouza           #+#    #+#             */
/*   Updated: 2022/04/18 14:42:35 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	cpy_len;
	size_t	index;
	size_t	final_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	cpy_len = src_len + dst_len;
	final_len = dst_len + 1;
	if (dst_len > size)
		return (src_len + size);
	if (size <= final_len)
		return (cpy_len);
	index = 0;
	while (src[index] && final_len + index < size)
	{
		dst[dst_len + index] = src[index];
		index++;
	}
	dst[dst_len + index] = '\0';
	return (cpy_len);
}
