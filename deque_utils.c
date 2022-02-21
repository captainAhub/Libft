#include "libft.h"

t_double_list   *double_list_init(void *p)
{
    t_double_list   *double_list;

    double_list = malloc(sizeof(t_double_list));
    if (!double_list)
        return(NULL);
    double_list->content = p;
    double_list->next = NULL;
    double_list->last = NULL;
    return(double_list);
}

void    deque_clear(t_deque *deque, void (*f)(void *))
{
    while (deque->size)
        deque_pop_back(deque, f);
}