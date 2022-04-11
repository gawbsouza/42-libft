/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 14:42:51 by gasouza           #+#    #+#             */
/*   Updated: 2022/04/11 16:15:37 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	index;

	index = 0;
	while (s[index])
	{
		if (s[index] == (char) c)
			return ((char *) &s[index]);
		index++;
	}
	if (s[index] == (char) c)
		return ((char *) &s[index]);
	return (NULL);
}
