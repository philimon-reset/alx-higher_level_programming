#include "holberton.h"

/**
 * leet - leet encoder
 * @s: check
 *
 * Return: address of the encoded string
 */
char *leet(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		s[i] = check(s[i]);
		i++;
	}
	return (s);
}

/**
 * check - check
 * @a: char to be encoded
 *
 * Return: char
 */
char check(char a)
{
	char one[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char two[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;
	char replacement = a;

	while (i < 52)
	{
		if (a == one[i])
		{
			replacement = two[i];
			break;
		}
		i++;
	}
	return (replacement);
}
