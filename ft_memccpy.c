/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleon-ba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 16:12:56 by bleon-ba          #+#    #+#             */
/*   Updated: 2021/05/31 16:12:59 by bleon-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	ch;

	ch = c;
	i = 0;
	while (i < n)
	{
		if ((((unsigned char *)dst)[i] = ((unsigned char *)dst)[i]) == ch)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
