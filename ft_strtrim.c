#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ans;
	size_t	i;
	size_t	j;

	if (!s1)
		return (NULL);
	else if (!set)
		return (ft_strdup(s1));
	i = 0;
	j = ft_strlen(s1);
	while (*(s + i) != '\0')
	{
		if (!ft_strchr(set, *(s + i)))
			break ;
		i++;
	}
	while (j > i)
	{
		if (!ft_strchr(set, *(s1 + j - 1)))
			break ;
		j--;
	}
	if (!(ans = (char *)malloc(((j - i) + 1) * sizeof(char))))
		return (NULL);
	ft_memcpy(ans, s1 + i, j - i);
	return (ans);
}
