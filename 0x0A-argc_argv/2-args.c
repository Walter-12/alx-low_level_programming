#include <stdio.h>
/**
 * main - Entry
 * @argc: count
 * @argv: pointer
 *
 * Retun: 0 success
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
