/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 21:30:34 by gasouza           #+#    #+#             */
/*   Updated: 2023/03/22 10:51:25 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *mem, size_t n)
{
	size_t	byte_index;
	char	*current_mem_byte;

	byte_index = 0;
	while (byte_index < n)
	{
		current_mem_byte = (mem + byte_index);
		*current_mem_byte = 0;
		byte_index++;
	}
}
