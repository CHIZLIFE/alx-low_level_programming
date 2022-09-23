#include "main.h"

/**
 * *_strcat - a function that concatenates two strings
 * @dest: destination
 * @src: source
 *
 * Return: the pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int length, i;

	length = 0, i = 0;
	while (dest[length] != '\0')
	{
		length++;
	}

	while (src[i] != '\0')
	{
		dest[length] = src[i];
		i++;
		length++;
	}

	dest[length] = '\0';
	return (des);
}
