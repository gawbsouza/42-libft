/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 02:46:54 by gasouza           #+#    #+#             */
/*   Updated: 2022/04/15 22:41:38 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*pos;
	unsigned char	*str;

	str = (unsigned char *) s;
	pos = str;
	while (pos < str + n)
	{
		if (*pos == (unsigned char) c)
			return (pos);
		pos++;
	}
	return (NULL);
}
