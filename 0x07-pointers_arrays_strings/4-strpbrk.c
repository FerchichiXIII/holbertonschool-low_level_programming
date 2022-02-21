#include "main.h"
/**
 * *_strpbrk - gets the length of a prefix substring.
 * @s: char
 * @accept: char
 * Return: char
 */

char *_strpbrk(char *s, char *accept)

{
	while (*s && *s != *accept)
	{
		++accept;
		++s;
	}
	return ((char *)(*accept == *s ? s : NULL));
}
