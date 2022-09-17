#include <stdio.h>

/**
 * main - program that prints either number
 * or fizz or Buzz or fizzBuzz
 *
 * Return: return 0
 */
int main(void)
{
	int num = 1;

	while (num++ < 100)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf("fizzBuzz ");
		}
		else if ((num % 3) == 0)
		{
			printf("fizz ");
		}
		else if ((num % 5) == 0)
		{
			if (num != 100)
			{
				printf("Buzz ");
			}
			else
			{
				printf("%d ", num);
			}
		}
		printf("\n");
	}
			printf("\n");
			return (0);
}
