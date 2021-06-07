#include "libft.h"
#include <stdio.h>
#include <string.h>

bool	is_char_in_string(char c, char *set)
{
	while (true)
	{
		if (*set == '\0')
			return (c == '\0');
		if (*set == c)
			return (true);
		set++;
	}
	return (false);
}

int	count(char *str, char *charset)
{
	int		count;
	char	*prev;
	char	*next;

	count = 0;
	prev = str;
	next = str;
	while (true)
	{
		if (is_char_in_string(*str, charset))
			next = str;
		if (next - prev > 1)
			count++;
		if (*str == '\0')
			break ;
		prev = next;
		str++;
	}
	return (count);
}

int	add_part(char **entry, char *previous, int size, char *charset)
{
	if (is_char_in_string(previous[0], charset))
	{
		previous++;
		size--;
	}
	*entry = (char *)malloc((size + 3) * sizeof(char));
	ft_strlcpy(*entry, previous, size);
	(*entry)[size] = '\0';
	(*entry)[size + 1] = '\0';
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		size;
	char	*prev;
	char	*next;
	char	**array;

	array = (char **)malloc((count(s, c) + 1) * sizeof(char *));
	i = 0;
	prev = s;
	next = s;
	size = next - prev;
	while (true)
	{
		if (is_char_in_string(*s, c))
			next = s;
		if (size > 1)
			i = i + add_part(&array[i], prev, size, c);
		if (*s == '\0')
			break ;
		prev = next;
		s++;
	}
	array[i] = 0;
	return (array);
}
