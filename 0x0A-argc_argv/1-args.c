#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints number of arguments
 * @argc: count
 * @argv: pointer
 *
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i, count;

	count = 0;

	if (argv[0])
	{
		for (i = 1; i < argc; i++)
		{
			count++;
		}
		printf("%d\n", count);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
