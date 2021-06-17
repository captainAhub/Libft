/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleon-ba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 16:24:53 by bleon-ba          #+#    #+#             */
/*   Updated: 2021/06/15 16:24:55 by bleon-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	itoa_size(long n)
{
	size_t	size;

	size = 0;
	if (n < 0)
		size = 1;
	while (1)
	{
		n = n / 10;
		size++;
		if (n == 0)
			break ;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	size;
	long	num;

	num = n;
	size = itoa_size(n);
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		num = num * -1;
	}
	str[size] = '\0';
	while (1)
	{
		str[size - 1] = (num % 10) + '0';
		num = num / 10;
		size--;
		if (num == 0)
			break ;
	}
	return (str);
}
