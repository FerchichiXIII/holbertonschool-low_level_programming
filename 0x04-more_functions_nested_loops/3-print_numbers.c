#include "main.h"
/**
 * print_numbers -  prints the numbers, from 0 to 9,
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_numbers(void)

{
	int i = 0;

	while (i <= 9)
	{
		putchar(i + '0');
		i = i + 1;
	}
	putchar('\n');
}
