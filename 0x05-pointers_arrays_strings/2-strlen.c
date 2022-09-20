#include "main.h"

/**
 * _strlen - a function that returns the lenght of a string
 * @s: input
 *
 * Return: 0 on success
 */
int _strlen(char *s)
{
	int count = 0, i = 0;
	char str[] = "c is fun";

	while (str(i) != '\0')
	{
		count++;
		i++;
	}
	return (count);
}
