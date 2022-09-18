#include "push_swap.h"

t_node	*new_node(unsigned int element)
{
	t_node	*res;

	res = (t_node *) malloc(sizeof(t_node));
	res->content = element;
	res->fixed = 0;
	res->previous = NULL;
	res->next = NULL;
	return (res);
}

void	clean_nodes(t_node *first, t_node *last)
{
	t_node	*aux;

	while (first != last)
	{
		aux = first;
		first = first->next;
		free(aux);
	}
	free(last);
}
