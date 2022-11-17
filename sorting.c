/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:51:34 by jpozuelo          #+#    #+#             */
/*   Updated: 2022/11/17 20:54:43 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two_three(t_monitor *mon, int amount)
{
	t_circular	*stack_a;

	stack_a = mon->stack_a;
	if (amount == 2)
		swap(stack_a, SA);
	else
	{
		if (stack_a->first->content == 0)
		{
			reverse(mon->stack_a, RRA);
			swap(mon->stack_a, SA);
		}
		else if (stack_a->first->content == 1 && stack_a->last->content == 2)
			swap(stack_a, SA);
		else if (stack_a->first->content == 1 && stack_a->last->content == 0)
			reverse(mon->stack_a, RRA);	
		else if (stack_a->first->content == 2 && stack_a->last->content == 1)
			rotate(mon->stack_a, RA);
		else if (stack_a->first->content == 2 && stack_a->last->content == 0)
		{
			rotate(stack_a, RA);
			swap(stack_a, SA);
		}
	}
}

void	sorting(t_monitor *mon)
{
	if (mon->amount <= 3)
		sort_two_three(mon, mon->amount);
	else if (mon->amount <= 6)
		sort_six(mon, mon->amount);
	else
		big_sort(mon, mon->amount);
	clean(mon);
}
