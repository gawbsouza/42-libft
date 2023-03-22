/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 08:37:12 by gasouza           #+#    #+#             */
/*   Updated: 2023/03/22 11:25:31 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{	
	t_list	*tmp;

	if (!lst)
		return ;
	tmp = *lst;
	if (tmp->next)
		ft_lstclear(&tmp->next, del);
	ft_lstdelone(tmp, del);
	*lst = NULL;
}
