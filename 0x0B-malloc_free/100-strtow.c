#include "holberton.h"

/**
 * strtow - function to split string to words
 * @str: string
 *
 * Return: NULL if size 0
 */
char **strtow(char *str)
{
	int a = 0, j = 0, i, v = 0, words = split(str);
	char **spl;

	if (words == 0)
		return (NULL);
	spl = (char **) malloc(sizeof(char *) * (words + 1));
	if (spl != NULL)
	{
		for (i = 0; i <= _strlen(str) && words; i++)
		{
			if ((str[i] != ' ') && (str[i] != '\0'))
				a++;
			if (((str[i] == ' ') || (str[i] == '\0')) && i && (str[i - 1] != ' '))
			{
				spl[v] = (char *) (malloc(sizeof(char) * (a + 1)));
				if (spl[v] != NULL)
				{
					while (j < a)
					{
						spl[v][j] = str[(v - a) + j];
						j++;
					}
					spl[v][j] = '\0';
					a = j = 0;
					v++;
				}
				else
				{
					while (v-- >= 0)
						free(spl[i]);
					free(spl);
					return (NULL);
				}
			}
		}
		spl[words] = NULL;
		return (spl);
	}
	else
		return (NULL);
}

/**
 * split - return the length of a a string
 * @s: string to be checked
 *
 * Return: lenght of string
 */

int split(char *s)
{
	int var = 0, word = 0;

	while (var <= _strlen(s))
	{
		if ((s[var] != ' ') && (s[var] != '\0'))
		{
			var++;
		}
		else if (((s[var] == ' ') || (s[var] == '\0')) && var && (s[var - 1] != ' '))
		{
			word += 1;
			var++;
		}
		else
		{
			var++;
		}
	}
	return (word);
}

/**
 * _strlen - return the length of a a string by words
 * @s: string to be checked
 *
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int len = 0;

	if (str != NULL)
	{
		while (str[len])
			len++;
	}
	return (len);
}
