/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:51:34 by jpozuelo          #+#    #+#             */
/*   Updated: 2022/10/18 16:32:39 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two_three(t_monitor *mon, int amount)
{
	if (amount == 2)
		swap(mon->stack_a, SA);
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
