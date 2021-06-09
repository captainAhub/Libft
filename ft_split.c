#include "libft.h"

int	ft_count(const char *str, char c)
{
	int		num;
	int		i;
	bool	word;

	num = 0;
	word = false;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			i++;
			word = false;
		}
		else
		{	
			if (!word)
			{
				word = true;
				num++;
			}
			i++;
		}
	}
	return (num);
}

char	*ft_getword(const char *s, char c)
{
	size_t	length;
	char	*str;

	length = 0;
	while (s[length] != '\0' && s[length] != c)
		length++;
	str = ft_substr(s, 0, length);
	if (str)
		return (str);
	return (NULL);
}

static void	ft_skip(char **s, char c)
{
	while (**s == c)
		*s = *s + 1;
}

void	ft_nextword(char **table, char c)
{
	char	*str;
	int		between;

	str = *table;
	between = 0;
	while (*str)
	{
		if (*str == c)
			between = 1;
		else if (*str != c && between == 1)
			return ;
		*table = *table + 1;
		str++;
	}
}

char	**ft_split(char const *s, char c)
{
	int		num;
	char	**words;
	char	*aux;
	int		i;

	if (s)
	{
		num = ft_count(s, c);
		words = (char **)malloc(sizeof(char *) * (num + 1));
		aux = ft_strdup(s);
		if (words)
		{
			if (aux)
			{
				i = 0;
				while (i < num)
				{
					ft_skip(&aux, c);
					words[i++] = ft_getword(aux, c);
					if (words[i++])
						ft_nextword(&aux, c);
				}
				words[i] = NULL;
				return (words);
			}
		}
	}
	return (NULL);
}
