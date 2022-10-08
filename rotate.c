/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:29:29 by jpozuelo          #+#    #+#             */
/*   Updated: 2022/10/08 18:54:50 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_circular *stack, char *letter)
{
	t_node	*aux;

	if (stack->size >= 2)
	{
		aux = stack->first;
		stack->first = aux->next;
		stack->last = aux;
	}
	if (letter)
		write(1, letter, 3);
}

void	r_rotate(t_circular *stack_a, t_circular *stack_b)
{
	rotate(stack_a, NULL);
	rotate(stack_b, NULL);
	write(1, "rr\n", 3);
}

void	reverse(t_circular *stack, char *letter)
{
	t_node	*aux;

	if (stack->size >= 2)
	{
		aux = stack->last;
		stack->first = aux;
		stack->last = aux->previous;
	}
	if (letter)
		write(1, letter, 4);
}

void	r_reverse(t_circular *stack_a, t_circular *stack_b)
{
	rotate(stack_a, NULL);
	rotate(stack_b, NULL);
	write(1, "rrr\n", 3);
}
