#include "main.h"
#include <stdlib.h>

/**
 * read_file- Read file to print
 * @filename: text file to be read
 * @letters: number of letters to read
 * Return: 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t i;
	ssize_t a;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	a = read(fd, buf, letters);
	i = write(STDOUT_FILENO, buf, a);

	free(buf);
	close(fd);
	return (i);
}
