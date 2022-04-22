/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 18:27:41 by gasouza           #+#    #+#             */
/*   Updated: 2022/04/22 14:36:59 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*itoa_rec(int n, char *str)
{
	char	digit;

	if (n == 0)
		*str = '0';
	else
	{
		digit = (n % 10);
		n /= 10;
		if (n < 0 || digit < 0)
		{
			*str++ = '-';
			digit *= -1;
			n *= -1;
		}
		if (n > 0)
			str = itoa_rec(n, str);
		*str = digit + '0';
	}
	return (str + 1);
}

char	*ft_itoa(int n)
{
	char	*str;

	str = malloc(12 * sizeof(char));
	if (!str)
		return (NULL);
	*(itoa_rec(n, str)) = '\0';
	return (str);
}
