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
	char s[] = "c is fun";

	while (s(i) != '\0')
	{
		count++;
		i++;
	}
	return (count);
}
