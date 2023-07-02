#include "main.h"
#include <stdio.h>

/**
 * print_buffer - print buffer
 * @b: The string b to buffer
 * @size: The size b point to
 *
 * Description:
 * - The function must print the content
 *   of size bytes of the buffer pointed by b
 * - The output should print 10 bytes per line
 * - Each line starts with the position of
 *   the first byte of the line
 *   in hexadecimal (8 chars), starting with 0
 * - Each line shows the hexadecimal content
 *   (2 chars) of the buffer, 2 bytes at a time,
 *   separated by a space
 * - Each line shows the content of the buffer. If the
 *   byte is a printable character,
 *   print the letter, if not, print .
 * - Each line ends with a new line \n
 * - If size is 0 or less, the output
 *   should be a new line only \n
 * - You are allowed to use the standard library
 *
 *   Return: void
 */

void print_buffer(char *b, int size)
{
	int i = 0, j = 0;

	if (size <= 0)
	{
		printf("\n");
	}

	while (i < size)
	{
		printf("%08x: ", i);

		for (j = 0; j < 10 && i + j < size; j++)
		{
			printf("%02x", b[i + j]);
			if (j % 2 == 1)
				printf(" ");
		}

		for (j = 0; j < 10 && i + j < size; j++)
		{
			printf("%c", b[i + j] >= ' ' && b[i + j] <= '~' ? b[i + j] : '.');
		}

		printf("\n");
		i += 10;
	}
}
