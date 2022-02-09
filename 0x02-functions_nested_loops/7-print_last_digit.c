#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: The character to print
 * @y: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int print_last_digit(int)

{

	int y = n % 10;

	if (y < 0)
	{
		y = y * -1;
	}
	_putchar('0' + y);
	return (y);
}
