#include "main.h"
#include <string.h>
/**
 * _memset - pointer
 * @s: pointer
 * @b: character
 * @n: unsigned integer
 *
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
