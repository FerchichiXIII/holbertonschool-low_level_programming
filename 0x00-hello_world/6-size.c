#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of int: %d byte(s)\n", sizeof(char));
	printf("Size of float: %d byte(s)\n", sizeof(int));
	printf("Size of double: %d byte(s)\n", sizeof(long int));
	printf("Size of char: %d byte(s)\n", sizeof(long long int));
	return (0);
}
