#include "main.h"
/**
 * times_table -  prints the 9 times table
 *
 *
 * Return: nothing.
 */
void times_table(void)
{
	int num = 1, res, i, j;

	for (i = 0; i < 10; i++)

	{

		for (j = 0; j < 10; j++)
		{
			_putchar('0');
			_putchar(",");
			_putchar(" ");

			res = num * j;

			_putchar(res);
		}

		num++;
	}
}
