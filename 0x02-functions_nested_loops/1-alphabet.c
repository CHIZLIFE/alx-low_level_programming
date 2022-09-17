#include "main.h"

/**
 * print_alphabet - a function that prints alphabet in lowercase
 *
 * Return: on success 1, otherwise 0
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
