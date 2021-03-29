#include "holberton.h"

/**
 * create_file - appends text at the end of a file.
 * @filename: file descripter
 * @text_content: count
 *
 * Return: int
 */

int create_file(const char *filename, char *text_content)
{
	int fd, sz, oz;
	char *buf = malloc(sizeof(char) * _strlen(text_content));

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if ((filename == NULL) || (fd == -1) || (buf == NULL))
	{
		free(buf);
		return (-1);
	}
	sz = read(fd, buf, _strlen(text_content));
	if (sz == -1)
		return (-1);
	oz = write(filename, buf, _strlen(text_content));
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
