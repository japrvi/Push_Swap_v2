/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 19:39:38 by jpozuelo          #+#    #+#             */
/*   Updated: 2022/09/25 19:39:39 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

unsigned int	search(int *list, int pattern, int amount)
{
	unsigned int	i;
	unsigned int	max;

	max = (unsigned int) amount;
	i = 0;
	while (i < max)
	{
		if (list[i] == pattern)
			return (i);
		i++;
	}
	return (i);
}

unsigned int	*label(int *list, int *s_list, int amount)
{
	int				i;
	unsigned int	*res;

	res = (unsigned int *) malloc(sizeof(int) * amount);
	i = 0;
	while (i < amount)
	{
		res[i] = search(s_list, list[i], amount);
		i++;
	}
	return (res);
}

int	*merge(int l_elements, int r_elements, int *lst, int *rst)
{
	int	i;
	int	j;
	int	r;
	int	*res;

	res = (int *) malloc(sizeof(int) * (l_elements + r_elements));
	i = 0;
	j = 0;
	r = 0;
	while (i < l_elements && j < r_elements)
	{
		if (lst[i] < rst[j])
			res[r++] = lst[i++];
		else
			res[r++] = rst[j++];
	}
	while (i < l_elements)
		res[r++] = lst[i++];
	while (j < r_elements)
		res[r++] = rst[j++];
	free(lst);
	free(rst);
	return (res);
}

int	*merge_sort(int n_elements, int *lst)
{
	int *left;
	int *right;
	int	left_elements;
	int	right_elements;

	left_elements = n_elements / 2;
	right_elements = n_elements - left_elements;
	left = deep_copy(lst, left_elements);
	right = deep_copy(lst + left_elements, right_elements);
	free(lst);
	if (n_elements > 2)
	{
		left = merge_sort(left_elements, left);
		right = merge_sort(right_elements, right);
	}
	return (merge(left_elements, right_elements, left, right));
}
