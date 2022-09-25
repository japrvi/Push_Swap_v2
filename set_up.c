/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_up.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 19:39:24 by jpozuelo          #+#    #+#             */
/*   Updated: 2022/09/25 19:39:26 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_up(t_monitor *mon)
{
	mon->s_list = merge_sort(mon->amount, deep_copy(mon->list, mon->amount));
	mon->List = label(mon->list, mon->s_list, mon->amount);
	mon->stack_a = stack_init();
	mon->stack_b = stack_init();
	if (!mon->stack_a || !mon->stack_b)
	{
		if (mon->stack_a)
			free(mon->stack_a);
		if (mon->stack_b)
			free(mon->stack_b);
		exit(2);
	}
	array_to_stack(mon->amount, mon->List, mon->stack_a);
	free(mon->list);
	free(mon->s_list);
	free(mon->List);
	/*if (mon->amount < 3)
		easy_case(mon);
	else
		rutine(mon);*/
}

void	array_to_stack(int size, int *list, t_circular *stack)
{
	int i;

	i = 0;
	while (i < size)
	{
		add(stack, new_node(list[i]));
		i++;
	}
}

t_circular	*stack_init(void)
{
	t_circular	*res;

	res = (t_circular *) malloc(sizeof(t_circular));
	res->first = NULL;
	res->last = NULL;
	return (res);
}

void	clean_stack(t_circular *stack)
{
	clean_nodes(stack->first, stack->last);
	free(stack);
}
