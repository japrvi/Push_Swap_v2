/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:09:39 by jpozuelo          #+#    #+#             */
/*   Updated: 2022/10/08 18:29:01 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#define	LA "pa\n"
#define LB "pb\n"

void	pushing(t_circular *stack_p, t_circular *stack_a)
{
	t_node *element;

	element = pop(stack_p);
	add(stack_a, element);
}

void	push(t_circular *stack_a, t_circular *stack_b, char letter)
{
	if (letter == 'a')
	{
		if (stack_a->size)
		{
			pushing(stack_a, stack_b);
			write(1, LA, 3);
		}
	}
	else
	{
		if (stack_b->size)
		{
			pushing(stack_b, stack_a);
			write(1, LB, 3);
		}
	}
}
