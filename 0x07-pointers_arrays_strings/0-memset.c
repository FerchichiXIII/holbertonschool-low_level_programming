#include "main.h"

/**
 * *_memset - fills memory with a constant byte..
 * @s: char
 * @b: char
 * @n: unsigned int
 * Return: s.
 */
char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	for (i = 0; n > i; i++)

	{
		s[i] = b;
	}
	return (s);
}
