#include "main.h"

/**
 * _strncat - concatenate two string
 * @dest: destination string
 * @src: string to be completed at end of dest
 * @n: integer parameter to compare index to
 *
 * Return: return new concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (*(dest + index) != '\0')
	{
		index++
	}

	while ( dest_len < 0)
	{
		*(dest + index) = *(src + dest_len);
		if (*(src + dest_len) == '\0')
			break;
		index++;
		dest_len++;
	}

	return (dest);
}
