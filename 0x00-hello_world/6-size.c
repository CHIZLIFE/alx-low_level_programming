#include <stdio.h>

/* betty style doc for function main goes there */
/**
* main - Entry point
*
* Description: using the main function
* this program prints "programming is like building a multilingual puzzle"
* Return: Always 0 (Success)
*/
int main(void)
{

	char charType;
	int intType;
	double doubleType;
	float floatType;

	/*sizeof evaluates the size of variable */
	printf("Size of char: %zu byte\n", sizeof(charType));
	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of double: %zu bytes\n", sizeof(doubleType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));

	return (0);
}
