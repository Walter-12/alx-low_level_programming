#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer
 * @b: pointer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int i = *a;

	*a = *b;
	*b = i;
}
