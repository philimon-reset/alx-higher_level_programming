#include "holberton.h"

/**
 * strtow - function to split string to words
 * @str: string
 *
 * Return: NULL if size 0
 */
char **strtow(char *str)
{
	char **spl;
	int a = 0, temp = 0, i, v = 0, words = split(str);

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
				spl[v] = (char *) malloc(sizeof(char) * (a + 1));
				if (spl[v] != NULL)
				{
					while (temp < a)
					{
						spl[v][temp] = str[(v - a) + temp];
						temp++;
					}
					spl[v][temp] = '\0';
					a = temp = 0;
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
 * @str: string to be checked
 *
 * Return: lenght of string
 */

int split(char *str)
{
	int i = 0, words = 0;

	while (i <= _strlen(str))
	{
		if ((str[i] != ' ') && (str[i] != '\0'))
		{
			i++;
		}
		else if (((str[i] == ' ') || (str[i] == '\0')) && i && (str[i - 1] != ' '))
		{
			words += 1;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (words);
}

/**
 * _strlen - return the length of a a string by words
 * @str: string to be checked
 *
 * Return: lenght of string
 */

int _strlen(char *str)
{
	int len = 0;

	if (str != NULL)
	{
		while (str[len])
			len++;
	}
	return (len);
}
