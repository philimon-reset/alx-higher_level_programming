#include "holberton.h"

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument array
 *
 * Return: int
 */

int main(int argc, char **argv)
{
	int fd, oz;
	int f1 = argv[1];
	int f2 = argv[2];
	char buf[1024];

	fd[0] = open(argv[1], O_WRONLY | O_CREAT | O_APPEND | O_TRUNC, 0664);
	fd[1] = open(argv[2], O_WRONLY | O_CREAT | O_APPEND | O_TRUNC, 0664);
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n", fd);
		exit(97);
	}
	if (fd[0] == -1)
		return (-1);
	if ((argv[2] == NULL) || (fd[1] == -1))
	{
		close(fb[0]);
		dprintf(STDERR_FILENO , "Error: Can't write to %s\n", argv[2], fd[1]);
		exit(98);
	}
	
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
