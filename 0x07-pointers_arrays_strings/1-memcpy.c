#include "main.h"
/**
 * *_memcpy - copies memory area.
 * @dest: char
 * @src: char
 * @n: unsigned int
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > i; i++)

	{

		dest[i] = src[i];
	}

	return (dest);
}
