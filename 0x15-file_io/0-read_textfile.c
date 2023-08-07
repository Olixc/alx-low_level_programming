#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer variable to the name of the file.
 * @letters: The number of letters the funnction should
 *	read and print.
 *
 * Return: NULL if the function fails or actual number of bytes
 *	the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *line;
	ssize_t o, r, w;

	if (filename == NULL)
		return (0);

	line = malloc(sizeof(char) * letters);

	if (line == NULL)
	{
		return (0);
	}


	o = open(filename, O_RDONLY);
	r = read(o, line, letters);
	w = write(STDOUT_FILENO, line, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(line);
		return (0);
	}

	free(line);
	close(0);

	return (w);
}
