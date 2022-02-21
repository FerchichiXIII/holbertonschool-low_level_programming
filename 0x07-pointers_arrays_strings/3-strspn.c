#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: char
 * @accept: char
 * Return: char
 */
unsigned int _strspn(char *s, char *accept)
{
	size_t n;
	const char *p;

	for (n = 1; *s; accept++, n++)

	{

		for (p = accept; *p && *p != *s; p++)

			;
		if (!*p)
			break;
	}

	return (n);
}
