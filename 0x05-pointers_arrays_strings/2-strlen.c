#include "main.h"

/**
 * _strlen - a function that returns the lenght of a string
 * @s: input
 *
 * Return: 0 on success
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}
	return (0);
}
