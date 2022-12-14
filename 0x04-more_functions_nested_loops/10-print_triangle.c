#include "main.h"

/**
 * print_triangle - print a triangle
 * @size: size parameter of triangle
 *
 * Return: returns nothing
 */
void print_triangle(int size)
{
	int sp, ro, tr;

	if (size <=  0)
	{
		putchar('\n');
	}
	else
	{
		for (ro = 0; ro <= (size - 1); ro++)
		{
			for (sp = 0; sp < (size - 1) - ro; sp++)
			{
				_putchar(' ');
			}

			for (tr = 0; tr <= ro; tr++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
