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
	size_t	src_size;
	size_t	dest_size;

	src_size = ft_strlen(src);
	dest_size = ft_strlen(dest);
	if (dest_size > size)
		dest_size = size;
	if (dest_size == size || size == 0)
		return (src_size + size);
	if (src_size < size - dest_size)
		ft_memcpy(dest + dest_size, src, src_size + 1);
	else
	{
		ft_memcpy(dest + dest_size, src, size - dest_size - 1);
		dest[size - 1] = '\0';
	}
	return (dest_size + src_size);
}
