#include "main.h"

/**
 * _isalpha - checks for alphabet
 *
 * @c: c is a character
 *
 * Return: 1 if c is letter
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
