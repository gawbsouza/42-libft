/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 21:05:04 by gasouza           #+#    #+#             */
/*   Updated: 2022/04/19 21:38:26 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static char	*trim_left(char *str)
{
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	return (str);
}

static int	comp_number(char *str, char signal, int max_factor)
{
	int	number;
	int	factor;

	number = 0;
	factor = 1;
	while (!*str || !ft_isdigit(*str))
		str--;
	while (factor <= max_factor)
	{
		number += (*str - '0') * factor;
		factor *= 10;
		str--;
	}
	if (signal == '-')
		return (number * -1);
	return (number);
}

int	ft_atoi(const char *s)
{
	int		factor;
	char	signal;
	char	*str;

	signal = '\0';
	factor = 0;
	str = (char *) s;
	str = trim_left(str);
	if (*str == '+' || *str == '-')
		signal = *str++;
	while (*str)
	{
		if (!ft_isdigit(*str))
			break ;
		if (factor == 0)
			factor = 1;
		else
			factor *= 10;
		str++;
	}
	return (comp_number(str, signal, factor));
}
