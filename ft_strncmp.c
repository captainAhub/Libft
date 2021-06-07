/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleon-ba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 16:14:53 by bleon-ba          #+#    #+#             */
/*   Updated: 2021/05/31 16:15:01 by bleon-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	res;
	int	pos;

	pos = 0;
	res = 0;
	while (res == 0 && n > 0)
	{
		if (s1[pos] < s2[pos])
			res = -1;
		else if (s1[pos] > s2[pos])
			res = 1;
		if (s1[pos] == '\0')
			break ;
		pos++;
		n--;
	}
	return (res);
}
