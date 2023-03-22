/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 02:46:54 by gasouza           #+#    #+#             */
/*   Updated: 2023/03/22 14:52:15 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *mem, int c, size_t n)
{
	while (n--)
	{
		if (*(t_uchar *) mem == (t_uchar) c)
			return ((void *) mem);
		mem++;
	}
	return (NULL);
}
