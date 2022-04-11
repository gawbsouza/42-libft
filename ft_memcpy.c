/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 19:13:54 by gasouza           #+#    #+#             */
/*   Updated: 2022/04/11 19:45:29 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	size_t	index;

	index = 0;
	while (index < n)
	{
		*((char *) s1 + index) = *((char *) s2 + index);
		index++;
	}
	return (s1);
}
