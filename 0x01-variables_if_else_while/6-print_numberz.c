#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: uses putchar to print all single digit numbers of base 10 from
 * 0
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar (i);
	}

	putchar ('\n');

	return (0);
}
