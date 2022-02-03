#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of int: %zu bytes\n", sizeof(char));
	printf("Size of float: %zu bytes\n", sizeof(int));
	printf("Size of double: %zu bytes\n", sizeof(long int));
	printf("Size of char: %zu byte\n", sizeof(long long int));
	return (0);
}
