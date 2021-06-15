/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleon-ba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 16:29:31 by bleon-ba          #+#    #+#             */
/*   Updated: 2021/06/15 16:29:32 by bleon-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ans;
	size_t	i;
	size_t	j;

	if (!s1)
		return (NULL);
	i = 0;
	j = ft_strlen(s1) + 1;
	while (*(s1 + i) != '\0')
	{
		if (!ft_strchr(set, *(s1 + i)))
			break ;
		i++;
	}
	while (--j > i)
	{
		if (!ft_strchr(set, *(s1 + j - 1)))
			break ;
	}
	ans = ((char *)malloc(((j - i) + 1) * sizeof(char)));
	if (!ans)
		return (NULL);
	ft_memcpy(ans, s1 + i, j - i);
	ans[j - i] = '\0';
	return (ans);
}
