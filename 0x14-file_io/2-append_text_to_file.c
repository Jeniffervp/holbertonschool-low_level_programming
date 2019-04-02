#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file.
 *@filename: name of the file to create.
 *@text_content: is a NULL terminated string to write to the file.
 * Return: 1 success, -1 failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fl, i = 0;

	if (filename == NULL)
		return (-1);

	fl = open(filename, O_RDWR | O_APPEND, 0600);

	if (text_content == NULL)
		return (1);

	if (fl == -1)
	{
		return (-1);
	}

	while (text_content[i])
		i++;
	write(fl, text_content, i);
	close(fl);
	return (1);
}
