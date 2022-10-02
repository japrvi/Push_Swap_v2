/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpozuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 19:36:22 by jpozuelo          #+#    #+#             */
/*   Updated: 2022/10/01 20:14:34 by jpozuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <limits.h>

typedef struct	s_node
{
	unsigned int	content;
	int				fixed;
	struct s_node	*previous;
	struct s_node	*next;
}	t_node;

typedef struct	s_circular
{
	t_node			*first;
	t_node			*last;
	unsigned int	min;
	unsigned int	max;
	int				size;
}	t_circular;

typedef struct	s_monitor
{
	t_circular	*stack_a;
	t_circular	*stack_b;
	int			*list;
	int			*s_list;
	int			*List;
	int			amount;
	int			size;
}	t_monitor;


void			init(int argc, char **argv, t_monitor *mon);
void			parse(char *str, t_monitor *mon);
void			error_msg(int *list);
int				isNumeric(char c);
int				n_atoi(char *str, int i, t_monitor *mon);
int				p_atoi(char *str, int i, t_monitor *mon);
int				size(char *str);
int				*fit(int amount, int *list);
int				check_order(int *list, int amount);
int				check_repeat(int *list, int amount);
void			good_out(int *list);
int				*copy(int *list, int amount);
int				*deep_copy(int *list, int amount);
int				*merge_sort(int n_elements, int *list);
int				*merge(int l_elements, int r_elements, int *lst, int *rst);
void			set_up(t_monitor *mon);
int				*label(int *list, int *s_list, int amount);
int				search(int *list, int patter, int amount);
void			set_up(t_monitor *mon);
t_circular		*stack_init(void);
void			rutine(t_monitor *mon);
void			easy_case(t_monitor *mon);
void			array_to_stack(int size, int *list, t_circular *stack);
t_node			*new_node(unsigned int element);
void			clean_nodes(t_node *first, t_node *last);
void			connect(t_node *previous, t_node *element, t_node *next);
t_node			*disconnect(t_node *previous, t_node *element, t_node *next);
void			add(t_circular *stack, t_node *element);
t_node			*pop(t_circular *stack);
void			array_to_stack(int size, int *list, t_circular *stack);

void			print_list(int amount, int *list);
void			erro_list(int *nlist);
void			print_stack(t_circular *stack);
#endif
