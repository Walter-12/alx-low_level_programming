#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;
	int d;
	long int lf;
	long long int lu;
	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(d));
	printf("Size of a long int: %lu byte(s)\n", sizeof(lf));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(lu));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));

	return (0);
}
