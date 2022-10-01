#include <stdio.h>

/**
 * main - sums multiples of 3 or 5
 *
 * Return: Always 0
 */
int main(void)
{
	int start_num, end_num, sum_total;

	end_num = 1024;
	sum_total = 0;

	for (start_num = 0; start_num < end_num; start_num++)
	{
		if ((start_num % 3 == 0) || (start_num % 5 == 0))
		{
			sum_total = sum_total + start_num;
		}
		else
		{
			continue;
		}
	}
		printf("%d", sum_total);
		printf("\n");
		return (0);
}
