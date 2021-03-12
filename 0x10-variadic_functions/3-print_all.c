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
	int i = 0, index;
	va_list args;

	va_start(args, format);
	while ((format != NULL) && (format[i]))
	{
		index = checker(format);
		count = format[i];
		switch (count)
		{
			case 'c':
				printf("%c", va_arg(args, int);       
		}
	}
	printf("\n");
	va_end(args);
}


/**
 * checker - print strings with given separator
 * @format: format
 *
 * Return: int
 */
int checker(const char * const format)
{
	int i = 0, j = 0;
	char str;

	while ((format != NULL) && (format[i]))
	{
		str = format[j];
		switch (str)
		{
			case 'c':
				i = j;
				j++;
				break;
			case 'f':
				i = j;
				j++;
				break;
			case 's':
				i = j;
				j++;
				break;
			case 'i':
				i = j;
				j++;
				break;
			default:
				j++;
				break;
		}
	}
	return (i);
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
