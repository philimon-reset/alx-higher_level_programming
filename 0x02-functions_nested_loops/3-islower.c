#include "holberton.h"

/**
 * _islower - checks if its lowercase
 *
 * Return: 1 if lowercase 0 if not
 */
int _islower(int c)
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
