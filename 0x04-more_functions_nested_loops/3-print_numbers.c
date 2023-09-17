#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 *
 * Return: void
 */

void print_numbers(void)
{
	char c;

	c = 48;
	while (c <= 57)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
