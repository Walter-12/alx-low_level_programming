#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints _putchar
 *
 * Return: 0 (success)
 */

int main(void)
{
	char text[8] = "_putchar";
	int i = 0;

	for (i = 0; i < 9; i++)
	{
		_putchar(text[i]);
	}

	_putchar('\n');

	return (0);
}