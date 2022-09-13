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
