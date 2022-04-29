/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 19:24:06 by gasouza           #+#    #+#             */
/*   Updated: 2022/04/28 22:47:23 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	power(int num, int pow)
{
	if (pow <= 1)
		return (num);
	return (num * power(num, pow - 1));
}

void	*ft_calloc(size_t nmemb, size_t size)
{	
	void	*ptr;
	size_t	ptr_size;
	int		max_int;

	if (!size || !nmemb)
		return (NULL);
	max_int = power(2, (sizeof(int) * 8) - 1) - 1;
	if (nmemb > max_int / size)
		return (NULL);
	ptr_size = nmemb * size;
	ptr = malloc(ptr_size);
	if (ptr != NULL)
		ft_bzero(ptr, ptr_size);
	return (ptr);
}
