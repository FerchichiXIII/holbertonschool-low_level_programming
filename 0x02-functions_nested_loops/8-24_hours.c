#include "main.h"

/**
 * jack_bauer - print every minute of the day
 * description: print minutes starting from 00:00 to 23:59
 *
 */

void jack_bauer(void)
{
	int h = 0;
	int m = 0;

	for ( h = 0; h < 60; h++)
	{
		_putchar ('')
	}
	 (h < 24)
	{
		while (m < 60)
		{
			_putchar('0' + (h / 10));
			_putchar('0' + (h % 10));
			_putchar(':');
			_putchar('0' + (m / 10));
			_putchar('0' + (m % 10));
			_putchar('\n');
			m++;
		}
		m = 0;
		h++;
	}
}