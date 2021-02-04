#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int l;
	char a;

	l = '0';
	a = 'a';
	while (l <= '9')
	{
		putchar(l);
		l = l + 1;
	}
	while (a <= 'f')
	{
		putchar(a);
		a = a + 1;
	}
	putchar('\n');
	return (0);
}
