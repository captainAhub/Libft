/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleon-ba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 16:13:46 by bleon-ba          #+#    #+#             */
/*   Updated: 2021/05/31 16:13:47 by bleon-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int				i;
	unsigned char	*aux;

	aux = b;
	i = 0;
	while (i < len)
	{
		if (aux[i] == '\0')
			break ;
		aux[i] = c;
		i++;
	}
	return (b);
}
