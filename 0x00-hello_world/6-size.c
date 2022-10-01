#include <stdio.h>


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


	printf("Size of a char: %d 1 byte(s)\n", sizeof(c));
	printf("Size of an int: %d 4 byte(s)\n", sizeof(i));
	printf("Size of a long int: %d 4 byte(s)\n", sizeof(li));
	printf("size of a long long int: %d 8 byte(s)\n", sizeof(lli));
	printf("Size of a float: %d 4 byte(s)\n", sizeof(f));

	return (0);
}
