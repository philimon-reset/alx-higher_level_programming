#include "holberton.h"

/**
 * _isalpha - checks if its alpha char
 *
 *@c: character to be checked
 * Return: 1 if letter 0 if not
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
