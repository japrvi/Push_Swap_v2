/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 19:41:00 by jpozuelo          #+#    #+#             */
/*   Updated: 2022/09/25 19:41:02 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(int amount, int *list)
{
	if (amount >= 0)
	{
		printf("\n%p\n", list);
		while (amount--)
			printf("El indice es %d, el valor %d\n", amount, list[amount]);
		printf("\n");
	}
}
