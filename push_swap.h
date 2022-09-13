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
}	t_circular;

typedef struct	s_monitor
{
	t_node				*stack_a;
	t_node				*stack_b;
	int					*list;
	int					*s_list;
	unsigned int		*List;
	int					amount;
	int					size;
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
unsigned int	*label(int *list, int *s_list, int amount);
unsigned int	search(int *list, int patter, int amount);

void	print_list(int amount, int *list);
void	erro_list(int *nlist);
#endif
