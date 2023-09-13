#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints alphabet letters except q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e' || c == 'q')
		{
			c++;
		}
		putchar (c);
	}

	putchar ('\n');

	return (0);
}
