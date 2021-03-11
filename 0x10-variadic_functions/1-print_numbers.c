#include "variadic_functions.h"

/**
 * print_numbers - print integers with given separator
 * @separator: delimiter
 * @n: number of arguments passed
 *
 * Return: void function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum = va_arg(args, int);
		if (separator != NULL)
		{
			if (i != (n - 1))
			{
				printf("%d%s", sum, separator);
			}
			else
			{
				printf("%d", sum);
			}
		}
		else
		{
			printf("%d", sum);
		}
	}
	printf("\n");
	va_end(args);
}
