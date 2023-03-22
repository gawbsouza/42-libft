/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 15:11:10 by gasouza           #+#    #+#             */
/*   Updated: 2023/03/22 11:08:49 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *str, char (*f)(unsigned int, char))
{
	char	*new_str;
	size_t	i;

	new_str = ft_strdup(str);
	if (new_str)
	{
		i = 0;
		while (str[i])
		{
			new_str[i] = f(i, str[i]);
			i++;
		}
	}
	return (new_str);
}
