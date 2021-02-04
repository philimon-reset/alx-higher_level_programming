#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	char u, l;

	l = 'a';
	u = 'A';
	while (l <= 'z')
	{
		putchar(l);
		l = l + 1;
	}
	while (u <= 'Z')
	{
		putchar(u);
		u = u + 1;
	}
	putchar('\n');
	return (0);
}
