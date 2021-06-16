#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	  t_list	*new_list;
	  t_list	*new;
	  t_list	*old;

	new_list = ft_lstnew((*f)(lst -> content));
	new = new_list;
	old = lst -> next;
	if (!lst || !new_list || !new)
		return (NULL);
	while (1)
	{
		if (old == NULL)
			break ;
		new -> next = ft_lstnew((*f)(old -> content));
		if (!new)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		new = new -> next;
		old = old -> next;
	}
	return (new_list);
}
