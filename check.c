#include "push_swap.h"

int	check_order(int *list, int amount)
{
	while (amount - 1)
	{
		amount--;
		if ((list[amount - 1] >= list[amount]))
			return (0);
	}
	return (1);
}

int	check_repeat(int *list, int amount)
{
	int	i;

	while (amount--)
	{
		i = 0;
		while(i < amount)
		{
			if (list[i] == list[amount])
				return (1);
			i++;
		}
	}
	return (0);
}
