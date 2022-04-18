/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 15:06:40 by gasouza           #+#    #+#             */
/*   Updated: 2022/04/18 16:05:20 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	out;
	size_t	inn;

	if (!little)
		return ((char *) big);
	out = 0;
	inn = 0;
	while (big[out] && out < len)
	{
		if (big[out] == little[inn])
			inn++;
		else
		{
			if (!little[inn])
				break ;
			if (big[out] != little[inn])
			inn = 0;
		}
		out++;
	}
	if (!little[inn])
		return ((char *) &big[out - inn]);
	return (NULL);
}
