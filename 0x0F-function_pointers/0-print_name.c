#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function to print name
 * @name: pointer to char type.
 * @f: pointer to function.
 * Return: Always successful
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
