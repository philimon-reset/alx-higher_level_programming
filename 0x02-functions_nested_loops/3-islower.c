#include "holberton.h"

/**
 * _islower - checks if its lowercase
 *
 *@c: character to be checked
 * Return: 1 if lowercase 0 if not
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
			}
	else
	{
		return (0);
	}
}
