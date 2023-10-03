#include <stdio.h>
#include "main.h"
/**
 * create_array - creates an array of chars
 * @size: integer
 * @c: character
 *
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *arr = malloc(sizeof(c) * size);

	if (size == 0)
		return (NULL);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
