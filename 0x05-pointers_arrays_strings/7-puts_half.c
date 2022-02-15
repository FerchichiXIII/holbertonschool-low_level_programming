#include "main.h"

/**
 * puts_half - check the code
 *@str: character.
 */
void puts_half(char *str)
{
	int i, n = 0, j;
	char *l;

	for (l = str; *l; l++)
		n += 1;
	if (n % 2 == 0)
	{
		j = n / 2;
		for (i = j; i < n; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		j = (n - 1) / 2;
		for (i = j + 1; i < n; i++)
		{
			_putchar(str[i]);
		}
	}

	_putchar(10);
}
