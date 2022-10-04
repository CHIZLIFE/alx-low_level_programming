#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - return length of a string
 * @s: char type
 * Return: length of string
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		return (a);
	}
}

/**
 * *_strdup - function to return pointer to string
 * @str: pointer to string array input
 * Return: 0 - success
 */
char *_strdup(char *str)
{
	char *c;
	int size;
	int x;

	if (str == NULL)
	{
		return (NULL);
	}
	size = _strlen(str) + 1;
	c = malloc(sizeof(char) * size);

	x = 0;
	while (x < size)
	{
		if (c == NULL)
		{
			return (NULL);
		}
		c[x] = str[x];
		x++;
	}
	return (c);
}
