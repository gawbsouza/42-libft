/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 19:24:06 by gasouza           #+#    #+#             */
/*   Updated: 2022/04/15 00:17:14 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <limits.h>

void	*ft_calloc(size_t nmemb, size_t size)
{	
	void	*ptr;
	size_t	ptr_size;

	if (!size || !nmemb)
		return (NULL);
	if (nmemb > INT_MAX / size)
		return (NULL);
	ptr_size = nmemb * size;
	ptr = malloc(ptr_size);
	if (ptr != NULL)
		ft_bzero(ptr, ptr_size);
	return (ptr);
}
