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
	unsigned char	*aux_src;
	unsigned char	*aux_dst;

	ch = (unsigned char)c;
	aux_src = (unsigned char *)src;
	aux_dst = (unsigned char *)dst;
	i = 0;
	while (i < n)
	{
		*aux_dst = aux_src[i];
		aux_dst++;
		if (ch == aux_src[i])
			return (aux_dst);
		i++;
	}
	return (NULL);
}
