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
	while (*(s1 + i) != '\0')
	{
		if (!ft_strchr(set, *(s1 + i)))
			break ;
		i++;
	}
	while (j > i)
	{
		if (!ft_strchr(set, *(s1 + j - 1)))
			break ;
		j--;
	}
	ans = ((char *)malloc(((j - i) + 1) * sizeof(char)));
	if (!ans)
		return (NULL);
	ft_memcpy(ans, s1 + i, j - i);
	ans[j - i] = '\0';
	return (ans);
}
