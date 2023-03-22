/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 16:51:04 by gasouza           #+#    #+#             */
/*   Updated: 2023/03/22 14:58:37 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t c)
{
	while (c--)
	{
		if (!*str1 || !*str2 || *str1 != *str2)
			return ((t_uchar) * str1 - (t_uchar) * str2);
		str1++;
		str2++;
	}
	return (0);
}
