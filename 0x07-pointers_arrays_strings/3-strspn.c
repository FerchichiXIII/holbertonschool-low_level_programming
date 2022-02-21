#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: char
 * @accept: char
 * Return: char
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int len =0;
    if((s == NULL) || (accept == NULL))
        return len;
    while(*s && strchr(accept,*s++))
    {
        len++;
    }
    return len;
}