#include "holberton.h"
#include <stdio.h>
#include <time.h>

/**
 * main - key generated
 *
 * Return: passwd
 */

int main (void)
{
	int var;
	char passwd;

	srand(time(0));
	while (var < 2645)
	{
		passwd = rand() % 128;
		var += passwd;
		_putchar(passwd);
	}
	_putchar(2772 - passwd);
	return (0);
}
