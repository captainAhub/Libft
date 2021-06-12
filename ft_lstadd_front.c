#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (node)
	{
		new -> next = *alst;
		*alst = new;
	}
}
