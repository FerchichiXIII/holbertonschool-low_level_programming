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
	char f, F;
	f = 'a';
	while (f <= 'z')

	{
		putchar(f);
		f = f + 1;
	}
	putchar(f);
	f = f + 1;
	{
		F = 'A';
		while (F <= 'Z')
		{
			putchar(F);
			F = F + 1;
		}
		putchar('\n');
		return (0);
	}