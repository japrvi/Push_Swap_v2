/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:46:47 by jpozuelo          #+#    #+#             */
/*   Updated: 2022/10/08 18:08:45 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_circular *stack, char *letter)
{
	t_node	*first;
	t_node	*next;
	
	if (stack->size >= 2)
	{
		first = stack->first;
		next = first->next;
		first->next = next->next;
		next->previous = first->previous;
		first->previous = next;
		next->next = first;
		stack->first = next;
	}
	if (letter)
		write(1, letter, 3);
}

void	swap_s(t_circular *stack_a, t_circular *stack_b)
{
	swap(stack_a, NULL);
	swap(stack_b, NULL);
	write(1, "ss\n", 3);
}
