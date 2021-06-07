/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleon-ba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 16:14:04 by bleon-ba          #+#    #+#             */
/*   Updated: 2021/05/31 16:14:05 by bleon-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*aux;
	size_t	i;
	size_t	size;

	size = ft_strlen(s1);
	aux = (char *)malloc((size + 1) * sizeof(char));
	if (aux == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		*(aux + i) = *(s1 + i);
		i++;
	}
	aux[i] = '\0';
	return (aux);
}
