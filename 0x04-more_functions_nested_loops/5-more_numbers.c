#include "main.h"

/**
 * more_numbers - prints numbers 0 to 14 ten times
 *
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int num;

	for (num = 0; num < 10; num++)
	{
		i = 0;
		while (i <= 14)
		{
			if (i >= 10)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
			i++;
		}
	_putchar('\n');
	}
}
