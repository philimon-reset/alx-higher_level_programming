#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	char l;

	l = '097';
	while (l <= 'z')
	{
		putchar(l);
		l = l + 1;
	}
	return (0);
}
