#include "variadic_functions.h"

/**
 * print_strings - print strings with given separator
 * @separator: delimiter
 * @n: number of arguments passed
 *
 * Return: void function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum = va_arg(args, int);
		if (i == (n - 1))
		{
			printf("%d\n", sum);
		}
		else
		{
			if (separator != NULL)
			{
				printf("%d%c ", sum, separator[0]);
			}
		}
	}
	va_end(args);
}
