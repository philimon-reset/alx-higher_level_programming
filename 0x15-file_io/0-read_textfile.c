#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to standard output
 * @filename: file descripter
 * @letters: count
 *
 * Return: any time size_t
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, sz;
	char *buf = malloc(sizeof(char) * letters);

	fd = open(*filename, O_RDONLY);
	if ((*filename == NULL) || (fd == -1))
		return (0);
	sz = read(fd, buf, letters);
	buf[sz] = '\0';
	close(fd);

	fd = open(*filename, O_CREAT | O_RDONLY, 00200);
	if ((*filename == NULL) || (fd == -1))
		return (0);
	sz = write(STDOUT_FILENO, buf, letters);
	close(fd);
}
