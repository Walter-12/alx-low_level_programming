#include "main.h"

/**
 * print_most_numbers - prints numbers 0 to 9 except 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	char c;

	c = 48;
	while (c <= 57)
	{
		if (c == 50 || c == 52)
		{
			c++;
		}
		else
		{
			_putchar(c);
			c++;
		}
	}

	_putchar('\n');
}
