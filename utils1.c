#include "push_swap.h"

void	error_msg(int *list)
{
	free(list);
	write(2, "Error\n", size("Error\n"));
	exit(1);
}

void	good_out(int *list)
{
	printf("END\n");
	free(list);
	exit(1);
}

int	*fit(int amount, int *list)
{
	int	*res;

	res = (int *) malloc(sizeof(int) * amount);
	while (amount--)
		res[amount] = list[amount];
	free(list);
	return (res);
}

int	*deep_copy(int *list, int amount)
{
	int	*res;

	res = (int *) malloc(sizeof(int) * amount);
	if (res)
	{
		while (amount--)
			res[amount] = list[amount];
	}
	return (res);
}
