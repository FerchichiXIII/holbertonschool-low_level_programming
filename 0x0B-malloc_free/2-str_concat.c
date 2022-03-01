#include "main.h"

/**
 * str_concat - duplicate string in new memory addr
 * @s1: char
 * @s2: char
 * Return: trn
 **/
char *str_concat(char *s1, char *s2)

{

	char *str = NULL;
	size_t len1 = 0;
	size_t len2 = 0;

	if (s1)
		len1 = strlen(s2);
	if (s2)
		len2 = strlen(s2);
	if (malloc(sizeof(char) * (len1 + len2 + 1)))
		return (NULL);
	if (s1)
		memcpy(str, s1, len1);
	if (s2)
		memcpy(str + len1, s2, len2);
	return (str);
