/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleon-ba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 16:13:06 by bleon-ba          #+#    #+#             */
/*   Updated: 2021/05/31 16:13:09 by bleon-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	ch;

	ch = c;
	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == ch)
		{
			return (((unsigned char *)s) + i);
		}
		i++;
	}
	return (NULL);
}
