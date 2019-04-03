#include "holberton.h"

/**
 * main - Entry point
 *@arc: Counter of arguments
 *@arv: array of arguments in shell
 * Return: 0 success.
 */

int main(int arc, char *arv[])
{
	int fl_f, fl_t;
	ssize_t length = 1024, writer;
	char buf[1024];

	if (arc != 3)
		dprintf(STDERR_FILENO,
			"Usage: cp file_from file_to\n"), exit(97);
	fl_f = open(arv[1], O_RDONLY);
	fl_t = open(arv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	length = read(fl_f, buf, 1024);
	if (length == -1)
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", arv[1]), exit(98);
	while (length != '\0')
	{
		writer = write(fl_t, buf, length);
		if (fl_t == -1 || writer != length)
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", arv[2]), exit(99);
		length = read(fl_f, buf, 1024);
		if (length == -1)
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", arv[1]),
				exit(98);
	}
	length = close(fl_t);
	writer = close(fl_f);
	if (length == -1)
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %i\n", fl_t), exit(100);
	if (writer == -1)
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %i\n", fl_f), exit(100);
	return (0);
}
