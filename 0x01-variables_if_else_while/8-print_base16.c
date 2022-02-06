#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main()
{
	for (int x = '0'; x <= '9'; x++)
	{
		x = tolower(x);
		putchar(x);
	}
	for (int x = 'a'; x <= 'f'; x++)
	{
		x = tolower(x);
		putchar(x);
	}
	putchar('\n');
	return 0;
}
