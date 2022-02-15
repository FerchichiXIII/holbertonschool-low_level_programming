#include "main.h"
/**
 *puts2-  str print
 *
 *@str: string
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void puts2(char *str)
{
	int a, z;

	for (a = 0; str[a] != '\0'; a++)

	{
	}
	for (z = 0; z < a; z += 2)
	{
		_putchar(str[z]);
	}
	_putchar('\n');
}
