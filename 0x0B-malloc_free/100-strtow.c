#include "holberton.h"

/**
 * strtow - function to split string to words
 * @str: string
 *
 * Return: NULL if size 0
 */
char **strtow(char **str)
{
	int a = 0, j = 0, var, v = 0, words = split(str);
	char **spl;

	if (words == 0)
		return (NULL);
	spl = (char **)malloc(sizeof(char *) * (words + 1));
	if (spl != NULL)
	{
		for (var = 0; var <= len(str) && words; var++)
		{ 
			if ((s[var] != ' ') && (s[var] != '\0'))
				a++;
			else if (((s[var] == ' ') || (s[var] == '\0')) && var && (s[var - 1] != ' '))
			{
				spl[v] = (char *)(malloc(sizeof(char) * (a + 1));
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
						free(spl[var]);
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
 * count - return the length of a a string by words
 * @s: string to be checked
 *
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int var;
	int output = 0;

	if (s != NULL)
	{
		for (var = 0; s[var] != '\0'; var++)
		{
			output += 1;
		}
	}
	return (output);
}
