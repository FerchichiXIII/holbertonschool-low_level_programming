#include "main.h"

/**
 * str_concat - duplicate string in new memory addr
 * @s1: char
 * @s2: char
 * Return: trn
 **/
char *str_concat(char *s1, char *s2)

{

	char *rtn = malloc(strlen(s1) + strlen(s2) + 1);
	int p, q = 0;


	for (p = 0; (rtn[q] = s1[p]) != '\0'; ++p, ++q)

	{
	}
	for (p = 0; (rtn[q] = s2[p]) != '\0'; ++p, ++q)
	{
	}
	return (rtn);
}
