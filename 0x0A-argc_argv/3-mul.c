#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: count
 * @argv: vector
 *
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc > 2)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
