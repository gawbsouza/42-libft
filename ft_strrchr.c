/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 16:31:57 by gasouza           #+#    #+#             */
/*   Updated: 2022/04/11 16:41:53 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*tmp;
	size_t	index;

	index = 0;
	tmp = NULL;
	while (str[index])
	{
		if (str[index] == (char) c)
			tmp = (char *) &str[index];
		index++;
	}
	if (str[index] == (char) c)
		tmp = (char *) &str[index];
	return (tmp);
}
