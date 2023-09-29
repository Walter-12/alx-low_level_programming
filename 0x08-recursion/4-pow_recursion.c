#include "main.h"
/**
 * _pow_recursion - raises value
 * @x: integer
 * @y: integer
 *
 * Return: integer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
		_putchar('\n');
	}
	else if (y == 0)
	{
		return (1);
		_putchar('\n');
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
		_putchar('\n');
	}
	return (0);
}
