#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: int
 * Return: nothing
 */

void print_diagonal(int n)

{
	int row, num_lines;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (row = 1; row <= n; row++)
		{
			if (row > 1)
			{
				for (num_lines = 1; num_lines <= row - 1; num_lines++)
				{
					putchar(' ');
				}
			}
			putchar('\\');
			putchar('\n');
		}
	}
}
