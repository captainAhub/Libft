#include "libft.h"

t_list	*ft_lstnew(void	*content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (node)
		node -> content = content;
	else
		return (NULL);
	node -> next = NULL;
	return (node);
}
