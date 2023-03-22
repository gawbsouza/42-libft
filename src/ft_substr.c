/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 11:37:29 by gasouza           #+#    #+#             */
/*   Updated: 2023/03/22 10:55:28 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(const char *str, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	size;

	if (!*str || start > ft_strlen(str))
		return (ft_strdup(""));
	size = ft_strlen(str + start);
	if (size > len)
		size = len;
	new_str = (char *) malloc((size + 1) * sizeof(char));
	if (new_str != NULL)
		ft_strlcpy(new_str, str + start, size + 1);
	return (new_str);
}
