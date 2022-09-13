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

	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	/*sizeof evaluates the size of variable */
	printf("Size of a char: %zu 1 byte(s)\n", sizeof(c));
	printf("Size of an int: %zu 4 byte(s)\n", sizeof(i));
	printf("Size of a long int: %zu 4 byte(s)\n", sizeof(li));
	printf("size of a long long int: %zu 8 byte(s)\n", sizeof(lli));
	printf("Size of a float: %zu 4 byte(s)\n", sizeof(f));

	return (0);
}
