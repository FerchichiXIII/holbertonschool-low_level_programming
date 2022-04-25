#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: int
 * Return: nothing
 */

void print_diagonal(int n)
{
	int i, s;
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (s = 0; s < n; s++)
				putchar(' ');
			putchar('\\');
			if (i == n - 1)
				continue;
			putchar('\n');
		}
	}
	putchar('\n');
}
