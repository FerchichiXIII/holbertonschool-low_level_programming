#include "main.h"
/**
 * *_strchr - character in a string
 * @c: char
 * @s: char
 * Return: char
 */
char *_strchr(char *s, char c)
{
	while (*s && *s != c)
	{
		++s;
	}
	return ((char *)(c == *s ? s : NULL));
}
