#include "function_pointers.h"

/**
 * print_name - main function
 * @name: name
 * @f: pointer to function
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
