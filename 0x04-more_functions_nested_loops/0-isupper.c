#include "main.h"
/**
 * _isupper - Write a function that checks for uppercase character.
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')

	{
		return (1);
	}
	return (0);
}
