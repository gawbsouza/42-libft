/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 02:46:54 by gasouza           #+#    #+#             */
/*   Updated: 2022/04/13 03:04:43 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*current_pos;
	unsigned char	*stop_pos;

	current_pos = (unsigned char *) s;
	stop_pos = current_pos + n;
	while (current_pos <= stop_pos)
	{
		if (*current_pos == (unsigned char) c)
			return (current_pos);
		current_pos++;
	}
	return (NULL);
}
