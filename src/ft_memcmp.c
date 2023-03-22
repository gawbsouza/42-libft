/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 21:55:28 by gasouza           #+#    #+#             */
/*   Updated: 2023/03/22 14:50:48 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *mem1, const void *mem2, size_t n)
{
	while (n--)
	{
		if (!mem1 || !mem2 || *(t_uchar *) mem1 != *(t_uchar *) mem2)
			return (*(t_uchar *) mem1 - *(t_uchar *) mem2);
		mem1++;
		mem2++;
	}
	return (0);
}
