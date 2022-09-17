#include "main.h"

/**
 * print_sign - checks if
 * @n: is greater than 0 or less 0
 *
 * Return: +1, 0 and -1 accordingly
 */
int print_sign(int n)
{
	int i;


	if (n > 0)
	{
		_putchar('+');
		i = 1;
	}

	else if (n == 0)
	{
		_putchar('0');
			i = 0;
	}

	else
	{
		_putchar('_');
		i = -1;
	}
	return (i);
}
