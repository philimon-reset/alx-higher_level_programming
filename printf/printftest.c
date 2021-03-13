#include "test.h"

/**
 * printftest - printf test function
 * @format: format
 *
 * Return: character count
 */
int printftest(const char *format, ...)
{
	char *tag;
	char *check;
	int i = 0, count;
	va_list args;

	va_start(args, format);
	index = checker(format);
	while (*format)
	{
		if (*format == '%')
		{
			switch (*format)
			{
				case 'c':
					tag = va_arg(args, check *);
					fputs(tag, stdout);
					format++;
					i++;
					break;
				case '%':
					check = va_arg(args, int);
					fputs(tag, stdout);
					format++;
					i++;
					break;
				case 's':
					tag = va_arg(args, int);
					fputs(tag, stdout);
					format++;
					i++;
					break;
				default:
					i++;
					break;
			}
		}
		else
		{
			putchar(*format);
			format++;
			i++;
		}
	}
	printf("\n");
	va_end(args);
}
