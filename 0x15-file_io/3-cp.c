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
	int fd[2], r1, w1;
	int f1 = argv[1];
	int f2 = argv[2];
	char *buf = malloc(sizeof(char) * 1024);

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd[0] = open(f1, O_RONLY);
	if ((f1 == NULL) || (fd[0] == -1))
	{
		close(fb[0]);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", f1);
		exit(98);
	}
	fd[1] = open(f2, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if ((f2 == NULL) || (fd[1] == -1))
	{
		close(fb[1]);
		dprintf(STDERR_FILENO, "Error: Can't write to ", f2);
		exit(99);
	}
	while ((r1 = read(f[0], buf, 1024)) != 0)
	{
		w1 = write(f[1], buf, r1);
		if (r1 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", f1);
			close(fb[1]);
			exit(98);
		}
		if (w1 == -1)
		{
			close(fb[1]);
			dprintf(STDERR_FILENO, "Error: Can't write to ", f2);
			exit(99);
		}
	}
	close(fd[0]);
	close(fd[1]);
	return (0);
}

int close_new(int f_n)
{
	if (close(f_n) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", f_n);
		exit(100);
	}
}
