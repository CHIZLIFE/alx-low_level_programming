#include<stdio.h>

/**
* main - print the string in the put function
*
* Description: using the main function
* this program prints "programming is like building a multilingual puzzle"
* Return: 0
*/
int main(void)
{

	char charType;
	int intType;
	long longType;
	float floatType;
	
	//sizeof evaluates the size of variable
	printf("Size of char: %zu byte\n", sizeof(charType));
	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of double: %zu bytes\n", sizeof(doubleType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));

	retutn (0);
}
