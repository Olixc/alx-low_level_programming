#include "main.h"

/**
 * main - check the code
 * @ac: argument count
 * @av: argument vector
 * Return: Always 0.
 */

int main(int ac, char **av)
{
	int fd_from, fd_to, rd, wr, cl;
	char buffer[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	rd = 1024;
	while (rd == 1024)
	{
		rd = read(fd_from, buffer, 1024);
		if (rd == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		wr = write(fd_to, buffer, rd);
		if (wr == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}
	cl = close(fd_from);
	if (cl == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);
	cl = close(fd_to);
	if (cl == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);
	return (0);
}
