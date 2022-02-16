#include "main.h"
/**
 *_strncat - concatenates two src
 *@src: is src
 *@dest: is src
 *@n: input
 * Return: Always dest.
 */
char *_strncat(char *dest, char *src, int n)
{

	int dest_len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
