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
	int fd1, fd2, r1, w1;
	char *buf = malloc(sizeof(char) * 1024);

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd[0] = open(argv[1], O_RDONLY);
	if ((argv[1] == NULL) || (fd[0] == -1))
	{
		close(fb[0]);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd[1] = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if ((argv[2] == NULL) || (fd[1] == -1))
	{
		close(fb[1]);
		dprintf(STDERR_FILENO, "Error: Can't write to ", argv[2]);
		exit(99);
	}
	while ((r1 = read(fd[0], buf, 1024)) != 0)
	{
		w1 = write(fd[1], buf, r1);
		if (r1 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		if (w1 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to ", argv[2]);
			exit(99);
		}
	}
	close(fd[0]);
	close(fd[1]);
	return (0);
}


/**
 * close_new - check if its closable
 * @f_n: file descrption
 *
 * Return: void
 */
void close_new(int f_n)
{
	if (close(f_n) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", f_n);
		exit(100);
	}
}
