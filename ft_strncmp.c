/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 16:51:04 by gasouza           #+#    #+#             */
/*   Updated: 2022/04/15 22:44:06 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t c)
{
	size_t			index;
	unsigned char	char_s1;
	unsigned char	char_s2;

	index = 0;
	while (index < c)
	{
		char_s1 = s1[index];
		char_s2 = s2[index];
		if (!char_s1 || !char_s2)
			return (char_s1 - char_s2);
		if (char_s1 != char_s2)
			return (char_s1 - char_s2);
		index++;
	}
	return (0);
}
