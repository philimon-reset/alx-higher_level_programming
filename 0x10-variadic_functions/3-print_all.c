#include "variadic_functions.h"

/**
 * print_all - print everything
 * @format: format
 *
 * Return: void function
 */
void print_all(const char * const format, ...)
{
	char count;
	unsigned int i;
	va_list args;

	va_start(args, format);
	count = checker(count);
	
	printf("\n");
	va_end(args);
}


/**
 * nil_check - print strings with given separator
 * @s: check if its NULL
 *
 * Return: (nil) if null
 */
int checker(const char * const format)
{
	if (s == NULL)
		s = "(nil)";
	return (s);
}


/**
 * nil_check - print strings with given separator
 * @s: check if its NULL
 *
 * Return: (nil) if null
 */
char *nil_check(char *s)
{
	if (s == NULL)
		s = "(nil)";
	return (s);
}
