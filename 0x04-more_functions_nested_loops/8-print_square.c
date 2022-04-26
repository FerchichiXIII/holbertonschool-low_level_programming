#include "main.h"
/**
 * print_square - prints a square.
 * @size: int
 * Return: nothing
 */

void print_square(int size)
{
	int row, column;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (column = 1; column <= size; column++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
