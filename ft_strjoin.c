/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleon-ba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 16:28:59 by bleon-ba          #+#    #+#             */
/*   Updated: 2021/06/15 16:29:01 by bleon-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ans;
	size_t	i;

	i = 0;
	if (s1 == NULL)
		return (ft_strdup(s2));
	if (s2 == NULL)
		return (ft_strdup(s1));
	ans = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char) + 1);
	if (ans == NULL)
		return (NULL);
	while (*(s1 + i) != '\0')
	{
		*(ans + i) = *(s1 + i);
		i++;
	}
	while (*s2 != '\0')
	{
		*(ans + i) = *s2;
		i++;
		s2++;
	}
	ans[i] = '\0';
	return (ans);
}
