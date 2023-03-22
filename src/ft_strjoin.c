/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 14:41:32 by gasouza           #+#    #+#             */
/*   Updated: 2023/03/22 11:05:47 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(const char *str1, const char *str2)
{
	size_t	len_str1;
	size_t	len_str2;
	size_t	len_new_str;
	char	*new_str;

	len_str1 = ft_strlen(str1);
	len_str2 = ft_strlen(str2);
	len_new_str = len_str1 + len_str2;
	new_str = (char *) malloc((len_new_str + 1) * sizeof(char));
	if (new_str)
	{
		ft_memcpy(new_str, str1, len_str1);
		ft_memcpy(new_str + len_str1, str2, len_str2);
		new_str[len_new_str] = '\0';
	}
	return (new_str);
}
