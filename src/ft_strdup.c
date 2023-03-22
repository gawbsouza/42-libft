/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 03:05:18 by gasouza           #+#    #+#             */
/*   Updated: 2023/03/22 10:48:32 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *str)
{
	size_t	len;
	char	*new_str;

	len = ft_strlen(str);
	new_str = (char *) malloc((len + 1) * sizeof(char));
	if (new_str)
	{
		if (len > 0)
			ft_memmove(new_str, str, len);
		new_str[len] = '\0';
	}
	return (new_str);
}
