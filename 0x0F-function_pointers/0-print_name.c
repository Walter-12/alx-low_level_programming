#include "function_pointers.h"
/**
 * print_name - prints name
 * @name: pointer to a char
 * @f: function pointer
 * Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
