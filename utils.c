#include "push_swap.h"

int	size(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	isNumeric(char c)
{
	return (c <= '9' && c >= '0');
}

int	n_atoi(char *str, int i, t_monitor *mon)
{
	long int	res;

	res = 0;
	i++;
	while (isNumeric(str[i]))
	{
		res = res * 10 - (str[i] - '0');
		if (res < INT_MIN)
			error_msg(mon->list);
		i++;
	}
	(mon->list)[(mon->amount)++] = res;
	return ((int) i);
}

int	p_atoi(char *str, int i, t_monitor *mon)
{
	long int	res;

	res = 0;
	while (isNumeric(str[i]))
	{
		res = res * 10 + (str[i] - '0');
		if (res > INT_MAX)
			error_msg(mon->list);
		i++;
	}
	(mon->list)[(mon->amount)++] = res;
	return ((int) i);
}
