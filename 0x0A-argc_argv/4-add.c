#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry
 * @argc: count
 * @argv: vector
 *
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i, sum;
	
	if (*argv != int)
	{
		printf("Error\n");
	}
	else if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			sum += atoi(argv[i]);
		
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");

	return (0);

}
