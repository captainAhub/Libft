/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleon-ba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 16:15:12 by bleon-ba          #+#    #+#             */
/*   Updated: 2021/05/31 16:15:13 by bleon-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*aux;
	size_t	left;
	size_t	nlen;

	aux = (char *)haystack;
	if (needle[0] == '\0')
		return (aux);
	left = len;
	nlen = (size_t)ft_strlen(needle);
	while (*aux && left >= nlen)
	{
		if (*aux == *needle)
		{
			if (ft_strncmp(needle, aux, nlen) == 0)
				return (aux);
		}
		left--;
		aux++;
	}
	return (NULL);
}
