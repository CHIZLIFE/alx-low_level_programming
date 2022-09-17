#include "main.h"

/**
 * _islower - checks if an input
 * @c: character is low or not
 *
 * Return: on success 1, otherwise 0
 */
int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);

	else
		return (0);
}
