#include <stdio.h>

/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int i = 1, j = 2, sum_total = 0;
	int k;

	while (j < 4000000)
	{
		if (j % 2 == 0)
			sum_total += j;
		k = j;
		j += i;
		i = k;
	}
	printf("%d\n", sum_total);
	return (0);
}
