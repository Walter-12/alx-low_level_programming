#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c;
	for (c = 122; c > 96; c--)
	{
		putchar (c);
	}
	putchar ('\n');

	return (0);
}
