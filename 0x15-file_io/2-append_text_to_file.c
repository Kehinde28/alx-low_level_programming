#include "main.h"

/**
 * append_text_to_file - append text at the end of the file
 * @filename: point to the name of file
 * @text_content: string to add at the end of the file
 * Return: if the function fails - -1
 *         Otherwise - 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int a, i, sen = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (sen = 0; text_content[sen];)
			sen++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	i = write(a, text_content, sen);

	if (a == -1 || w == -1)
		return (-1);

	close(a);

	return (1);
}
