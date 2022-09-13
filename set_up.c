#include "push_swap.h"

void	set_up(t_monitor *mon)
{
	mon->s_list = merge_sort(mon->amount, deep_copy(mon->list, mon->amount));
	mon->List = label(mon->list, mon->s_list, mon->amount);
	if (mon->amount < 3)
		easy_case(mon);
	else
		rutine(mon);
	stack_init(mon);
}

void	stack_init(mon)
{
	stacka_init();
	stackb_init();
}
