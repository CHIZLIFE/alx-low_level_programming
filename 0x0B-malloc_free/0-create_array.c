#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creat an array of size char c.
 * @size: unsigned int type
 * @c: char type
 * Return: 0 - success
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	str = malloc(sizeof(char) * size);
	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	str[i] = '\0';
	return (str);
}
