#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - variadic functions that prints strings
 * @separator: is the string to be printed between the strings.
 * @n: is the number of strings passed to the function.
 * Return: Always successful.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;
	char *test;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		test = va_arg(arg, char*);
		if (test)
		{
			printf("%s", test);
		}
		else
			printf("(nill)");
		if (separator != NULL && (i < (n - 1)))
			printf("%s", separator);
	}
	va_end(arg);
	printf("\n");
}
