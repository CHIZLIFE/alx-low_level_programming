#include "main.h"

/**
 * _puts_recursion - function that print a string, followed by a new line.
 * @s: string
 *
 * Return: no return
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
	putchar(*s);
	_puts_recursion(s + 1);
	}
	else
	putchar('\n');
}
