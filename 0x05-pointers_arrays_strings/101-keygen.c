#include "holberton.h"
#include <stdio.h>
#include <time.h>
#define LIMIT 89

/**
 * _strlen - return the length of a a string
 * @s: string to be checked
 *
 * Return: lenght of string
 */

int main (void)
{
	int var, output = 0;
	char passwd[8], string[] = "ABCDEFGHIJKLMOPQRSTUVWXYZabcdefghijklmopqrstuvwxyz0123456789~`!@#$%^&*()_-+={}[]:;<>,./?";

	srand(time(0));
	for (var = 0; var < 8; var++)
	{
		output = rand() % LIMIT;
		passwd[var] = string[output]
	}
	passwd[var] = '\0';
	printf("%s", passwd);
	return (0);
}
