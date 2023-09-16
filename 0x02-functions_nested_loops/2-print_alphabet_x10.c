#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * return: void
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char alpha = 'a';

		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		i++;
		_putchar('\n');
	}
}
