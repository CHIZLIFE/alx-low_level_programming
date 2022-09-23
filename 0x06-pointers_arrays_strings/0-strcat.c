#include "main.h"

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
	while (s1[length] != '\0')
	{
		length++;
	}

	while (s2[i] != '\0')
	{
		s1[length] = s2[i];
		i++;
		length++;
	}

	s1[length] = '\0';
	return (s1);
}
