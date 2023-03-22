/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 08:27:16 by gasouza           #+#    #+#             */
/*   Updated: 2023/03/22 10:53:53 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *str, const char *set)
{
	size_t	size;

	if (!str)
		return (NULL);
	while (*str && ft_strchr(set, *str))
		str++;
	size = ft_strlen(str);
	while (size && ft_strchr(set, str[size]))
		size--;
	return (ft_substr(str, 0, size + 1));
}
