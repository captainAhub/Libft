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

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0')
		return ((char *) haystack);
	if (len == 0)
		return (NULL);
	i = 0;
	j = 0;
	while (true)
	{
		if (needle[j] == '\0')
			return ((char *)(haystack + (i - j)));
		if (haystack[i] == needle[j])
			j++;
		else
		{
			i = j - 1;
			j = 0;
		}
		if (haystack[i] == '\0' || i >= len)
			return (NULL);
		i++;
	}
}
