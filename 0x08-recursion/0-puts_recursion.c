#include "main.h"

/**
 * _puts_recursion - function that print a string, followed by a new line.
 * @s: string
 *
 * Return: on success 1
 * on error 0, is returned
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	putchar(*s);
	_puts_recursion(s++);

	putchar('\n');
}
