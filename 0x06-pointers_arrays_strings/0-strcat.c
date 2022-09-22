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
	int l1, l2, i;
	char s1[30] = "isaiah";
	char s2[7] = "richman";

	l1 = strlen(s1);
	l2 = strlen(s2);
	for (i = 0; i <= l2; i++)
	{
		s1[l + i] = s2[i];
	}
	putchar("%s", s1 '\0');
}
