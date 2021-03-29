#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: file descripter
 * @text_content: count
 *
 * Return: int
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, oz;

	fd = open(filename, O_WRONLY | O_APPEND);
	if ((filename == NULL) || (fd == -1))
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	oz = write(fd, text_content, _strlen(text_content));
	if (oz == -1)
		return (-1);
	close(fd);
	return (1);
}

/**
 * _strlen - return the length of a a string
 * @s: string to be checked
 *
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int var;
	int output = 0;

	for (var = 0; s[var] != '\0'; var++)
	{
		output += 1;
	}
	return (output);
}
