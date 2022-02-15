#include "main.h"
/**
 *rev_string-  reverses a string.
 *
 *@s: input
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void rev_string(char *s)
{
int j, k, l;
int a = 0;

for (j = 0; s[j] != '\0'; j++)
{
a = a + 1;
}
for (k = 0; k < a / 2; k++)
{
l = s[k];
s[k] = s[a - k - 1];
s[a - k - 1] = l;
}
}
