#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @i: string
 *
 * Return: i.
 */

char *string_toupper(char *i)

{

	int b = 0;

	while (i[b])

	{

		if (i[b] >= 97 && i[b] <= 122)

		{
			i[b] -= 32;
		}
		b++;
	}
	return (i);
}
