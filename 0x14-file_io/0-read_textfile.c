#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 *@filename: name of the file to create.
 *@letters: is the number of letters it should read and print.
 * Return: 1 success, -1 failure.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fl = 0, length = 0, wri = 0;
	char *buff;

	if (filename == NULL)
		return (0);

	fl = open(filename, O_RDONLY);
	if (fl == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(fl);
		free(buff);
		return (0);
	}
	length = read(fl, buff, letters);
	if (length == -1)
	{
		close(fl);
		free(buff);
		return (0);
	}
	wri = write(STDOUT_FILENO, buff, length);
	if (wri == -1)
	{
		close(fl);
		free(buff);
		return (0);
	}
	close(fl);
	free(buff);
	return (length);
}
