#include "libft.h"

t_deque *deque_init(void)
{
    t_deque *deque;

    deque = malloc(sizeof(t_deque));
    if (!deque)
        return(deque);
    deque->head = NULL;
    deque->tail = NULL;
    deque->size = 0;
    return(deque);
}

void    deque_push_back(t_deque *deque, void *p)
{
    t_double_list   *aux;

    
    //falta la función de inicializar la doble lista.
    (deque->size)++;
    aux = double_list_init(p);
    if (!aux)
        return ;
    if (deque->size == 1)
    {
        deque->head = aux;
        deque->tail = aux;
        return;
    }
    aux->last = deque->tail; //último de aux es igual a último d deque
    deque->tail->next = aux; //asignamos al next de deque lo guardado en aux
    deque->tail = deque->tail->next; //deque tail igual al next (aux)
}

void    deque_push_front(t_deque *deque, void *p)
{
	t_double_list *aux;

	(deque->size)++;
	aux = double_list_init(p);
	if (!aux)
		return ;
	if (deque->size == 1)
	{
		deque->head = aux;
		deque->tail = aux;
		return ;
	}
	aux->next = deque->head;
	deque->head->last = aux;
	deque->head = deque->head->last;
	
}

void deque_pop_back(t_deque *deque, void(*f)(void *))
{
	t_double_list	*aux;
	if (deque->size < 1 || !deque->tail)
		return ;
	(deque->size)--;
	aux = deque->tail;
	deque->tail = deque->tail->last;
	if (deque->tail)
		deque->tail->next = NULL;
	if (f)
		f(aux->content);
	free(aux);
}