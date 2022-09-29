#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of string
 * @s: string
 * Return: return length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(++s));
}
