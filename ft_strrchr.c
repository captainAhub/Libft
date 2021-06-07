/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleon-ba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 16:15:22 by bleon-ba          #+#    #+#             */
/*   Updated: 2021/05/31 16:15:23 by bleon-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	int		current;
	char	*last;

	i = 0;
	last = NULL;
	while (true)
	{
		current = s[i];
		if (current == c)
			last = (char *)(s + i);
		if (current == '\0')
			break ;
		i++;
	}
	return (last);
}
