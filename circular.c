#include "push_swap.h"

void	add(t_circular *stack, t_node *element)
{
	if (stack->size == 0)
		stack->last = element;
	else if (stack->size == 1)
	{
		connect(stack->last, element, stack-> last);
		stack->first = element;
	}
	else
	{
		connect(stack->last, element, stack->first);
		stack->first = element;
	}
	stack->size++;
}

t_node	*pop(t_circular *stack)
{
	t_node *res;

	res = NULL;
	if (stack->size)
	{
		stack->size--;
		if (stack->size)
		{
			res = stack->last;
			stack->last = NULL;
		}
		else
			return (disconnect(stack->first->previous, stack->first, stack->first->next));
	}
	return (res);
}
