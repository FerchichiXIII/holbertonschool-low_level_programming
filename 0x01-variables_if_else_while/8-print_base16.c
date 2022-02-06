#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
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
	return (0);
}
