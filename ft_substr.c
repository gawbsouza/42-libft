/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 11:37:29 by gasouza           #+#    #+#             */
/*   Updated: 2022/04/20 14:33:11 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	str_len;
	size_t	sub_len;
	size_t	i;
	char	*new_str;

	str_len = ft_strlen(s);
	if (len == 0 || start > str_len)
	{
		new_str = malloc(sizeof(char));
		*new_str = '\0';
		return (new_str);
	}
	sub_len = str_len - start;
	if (len < sub_len)
		sub_len = len;
	new_str = malloc(sub_len * sizeof(char));
	i = 0;
	while (s[start + i] && i < len)
	{
		new_str[i] = s[start + i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
