/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 19:40:35 by jpozuelo          #+#    #+#             */
/*   Updated: 2022/09/25 19:40:37 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*disconnect(t_node *previous,  t_node *element, t_node *next)
{
	element->next = NULL;
	element->previous = NULL;
	next->previous = previous;
	previous->next = next;
	return (element);
}

void	connect(t_node *previous, t_node *element, t_node *next)
{
	element->previous = previous;
	element->next = next;
	next->previous = element;
	previous->next = element;
}

t_node	*new_node(unsigned int element)
{
	t_node	*res;

	res = (t_node *) malloc(sizeof(t_node));
	res->content = element;
	res->fixed = 0;
	res->previous = NULL;
	res->next = NULL;
	return (res);
}

void	clean_nodes(t_node *first, t_node *last)
{
	t_node	*aux;

	while (first != last)
	{
		aux = first;
		first = first->next;
		free(aux);
	}
	free(last);
}
