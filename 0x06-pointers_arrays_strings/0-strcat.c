#include "main.h"
#include <stdio.h>

/**
 * _strcat - a function that concatenates two strings
 * @dest: destination
 * @src: source
 *
 * Return: the pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int length, i;
	char s1[100] = "programming";
	char s2[] = "is awesome";

	length = 0, i = 0;
	while (s1[length++])
	{
		length++;
	}

	for (i = 0; s2[i]; i++,)
	{
		s1[length++] = s2[i];
	}
	return (s1);
}
