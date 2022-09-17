#include <ctype.h>
#include "main.h"

/**
 * _isalpha - checks if an input
 * @c: character is lower or not
 *
 * Return: on success 1, otherwise 0
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
