#include "main.h"

/**
 * create_file - Creat a file
 * @filename: point to the file to created
 * @text_content:  point to the string of the file
 * Return: If function fails - -1
 *         Otherwise - 1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i, sen = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (sen = 0; text_content[sen];)
			sen++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	i = write(fd, text_content, sen);

	if (fd == -1 || i == -1)
		return (-1);

	close(fd);

	return (1);
}
