#include "main.h"

/**
 * _isupper - checks if a character is uppercase or not
 * @c: character to be tested
 *
 * Return: on success 1
 * on failure 0 is return
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
