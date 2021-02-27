#include "holberton.h"
#include <unistd.h>

/**
 * _putchar - return the putchar
 * @c: string to be checked
 *
 * Return: l
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
