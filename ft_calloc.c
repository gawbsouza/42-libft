/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 19:24:06 by gasouza           #+#    #+#             */
/*   Updated: 2022/04/28 23:07:09 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{	
	void	*ptr;
	size_t	ptr_size;
	size_t	max_size;

	if (!size || !nmemb)
		return (NULL);
	max_size = -1;
	if (nmemb > max_size / size)
		return (NULL);
	ptr_size = nmemb * size;
	ptr = malloc(ptr_size);
	if (ptr != NULL)
		ft_bzero(ptr, ptr_size);
	return (ptr);
}
