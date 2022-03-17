#include "main.h"
/**
 *puts2-  str print
 *
 *@str: string
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_array(int *a, int n)
{
	if (n < 0)
	{
		my_putchar(0x2D);
		n = -n;
	}

	if (n > 9)
	{
		my_put_nbr(n / 10);
	}

	_putchar((n % 10) + '0');

	return 0;
}
