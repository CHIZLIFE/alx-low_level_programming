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
	printf("Size of char: %zu byte(s)\n", sizeof(c));
	printf("Size of int: %zu byte(s)\n", sizeof(i));
	printf("Size of long int: %zu byte(s)\n", sizeof(li));
	printf("size of long long int: %zu byte(s)\n", sizeof(lli));
	printf("Size of float: %zu byte(s)\n", sizeof(f));

	return (0);
}
