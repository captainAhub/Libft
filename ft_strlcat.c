/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleon-ba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 16:14:16 by bleon-ba          #+#    #+#             */
/*   Updated: 2021/05/31 16:14:17 by bleon-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	char			*dst_aux;
	char			*src_aux;
	size_t			length;
	size_t			i;

	dst_aux = dest;
	src_aux = src;
	i = size;
	while (i-- != 0 && *dst_aux != '\0')
		dst_aux++;
	length = dst_aux - dest;
	i = size - length;
	if (i == 0)
		return (i + ft_strlen(src_aux));
	while (*src_aux != '\0')
	{
		if (i != 1)
		{
			*dst_aux++ = *src_aux;
			i--;
		}
		src_aux++;
	}
	*dst_aux = '\0';
	return (length + (src_aux - src));
}
