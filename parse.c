/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 19:40:48 by jpozuelo          #+#    #+#             */
/*   Updated: 2022/09/25 19:40:50 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init(int argc, char **argv, t_monitor *mon)
{
	int	i;

	if (argc > 1)
	{
		mon->size = 1024;
		mon->list = (int *) malloc(sizeof(int) * 1024);
		if (mon->list)
		{
			i = 1;
			while (i < argc)
				parse(argv[i++], mon);
		}
		mon->list = fit(mon->amount, mon->list);
		if (check_repeat(mon->list, mon->amount))
			error_msg(mon->list);
		if (check_order(mon->list, mon->amount))
			good_out(mon->list);
	}
	else 
		exit(1);
}

void	parse(char *str, t_monitor *mon)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == ' ')
			i++;
		else if (isNumeric(str[i]))
			i = p_atoi(str, i, mon);
		else if (str[i] == '-')
		{
			if (isNumeric(str[i + 1]))
				i = n_atoi(str, i, mon);
			else
				error_msg(mon->list);
		}
		else
			error_msg(mon->list);
	}
}
