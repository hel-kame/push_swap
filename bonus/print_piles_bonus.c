#include "push_swap.h"
void	print_piles(int *a, int *b)
{
	int	i;
	int	y;

	i = 1;
	y = 1;
	printf("  A  |  B\n");
	printf("-----|-----\n");
	printf("  %d  |  %d\n", a[0], b[0]);
	printf("-----|-----\n");
	while (i <= a[0] || y <= b[0])
	{
		if (i <= a[0])
			printf("%-5d|", a[i]);
		else
			printf("     |");
		if (y <= b[0])
			printf("%-5d\n", b[y]);
		else
			printf("     \n");
		i++;
		y++;
	}
}
