#include "main.h"

/**
 * print_line - draws a straight line
 *
 * @n: integer
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (n > 0)
		{
			_putchar('_');
		}
		else
		{
			_putchar('\n');
		}
		i++;
	}
	_putchar('\n');
}
