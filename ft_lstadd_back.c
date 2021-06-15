/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleon-ba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 16:25:10 by bleon-ba          #+#    #+#             */
/*   Updated: 2021/06/15 16:25:12 by bleon-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (node)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			node = ft_lstlast(*lst);
			node -> next = new;
		}
	}
}
