#include "main.h"
/**
 * factorial - returns factorial
 * @n: integer
 *
 * Return: integer
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
		_putchar('\n');
	}
	else if (n == 0)
	{
		return (1);
		_putchar('\n');
	}
	else
	{
		return (n * factorial(n - 1));
		_putchar('\n');
	}
}
