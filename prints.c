/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 19:41:00 by jpozuelo          #+#    #+#             */
/*   Updated: 2022/10/01 20:16:27 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_circular *stack)
{
	t_node	*aux;
	t_node	*last;

	aux = stack->first;
	last = stack->last;
	if (aux)
	{
		while (aux != last)
		{
			printf("Contenido: %i\t Tamaño: %i\n", aux->content, stack->size);
			aux = aux->next;
		}
	}
	if (last)
			printf("Contenido: %i\t Tamaño %i\n", last->content, stack->size);
}

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
