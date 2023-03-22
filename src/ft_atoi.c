/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 21:05:04 by gasouza           #+#    #+#             */
/*   Updated: 2023/03/22 14:44:36 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#ifndef EMPTY_CHARACTERS
# define EMPTY_CHARACTERS "\t\n\v\f\r "
#endif

#ifndef NUMBER_BASE
# define NUMBER_BASE 10
#endif

static const char	*skip_empty_chars(const char *str);
static const char	*skip_signal_prefix(const char *str);
static int			ascii_to_number(const char c);
static int			get_max_place_value(const char *str);

int	ft_atoi(const char *str)
{
	int			is_negative;
	int			final_number;
	const char	*current_char;
	int			place_value;

	final_number = 0;
	str = skip_empty_chars(str);
	is_negative = *str == '-';
	current_char = skip_signal_prefix(str);
	place_value = get_max_place_value(current_char);
	while (*current_char && ft_isdigit(*current_char))
	{
		final_number += ascii_to_number(*current_char) * place_value;
		current_char++;
		place_value /= NUMBER_BASE;
	}
	if (is_negative)
		final_number *= -1;
	return (final_number);
}

static const char	*skip_empty_chars(const char *str)
{
	while (ft_strchr(EMPTY_CHARACTERS, *str))
		str++;
	return (str);
}

static const char	*skip_signal_prefix(const char *str)
{
	if (*str == '+' || *str == '-')
		str++;
	return (str);
}

static int	ascii_to_number(const char c)
{
	return (c - '0');
}

static int	get_max_place_value(const char *str)
{
	int	max_place_value;

	max_place_value = 0;
	while (*str && ft_isdigit(*str))
	{
		if (!max_place_value)
			max_place_value = 1;
		else
			max_place_value *= NUMBER_BASE;
		str++;
	}
	return (max_place_value);
}
