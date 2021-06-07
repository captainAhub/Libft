/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleon-ba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 16:13:16 by bleon-ba          #+#    #+#             */
/*   Updated: 2021/05/31 16:13:17 by bleon-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*aux1;
	unsigned char	*aux2;

	if (n == 0)
		return (0);
	aux1 = (unsigned char *)s1;
	aux2 = (unsigned char *)s2;
	while ((*aux1 == *aux2) && n >= 0)
	{
		*aux1++;
		*aux2++;
		n--;
	}
	return (*aux1 - *aux2);
}
