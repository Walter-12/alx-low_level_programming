#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: n is a number
 *
 * Return: 1 if n is greater than zero and -1 if less than zero, 0 if zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
