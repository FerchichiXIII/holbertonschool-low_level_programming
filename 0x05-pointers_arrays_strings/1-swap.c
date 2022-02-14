#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 *@a : ptr to b
 *@b : ptr to b
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
