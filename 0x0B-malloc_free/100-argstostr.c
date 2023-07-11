#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * *argstostr - concatenate all arguments to string.
 * @ac: argument count
 * @av: argvument vector that contains all arguments.
 *
 * Return: concat pointer
 */
char *argstostr(int ac, char **av)
{
	int i, len;
	char *str_concat, *currentPos;

	len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]) + 1;
	}
	
	len += ac - 1;

	str_concat = malloc(sizeof(char) * len);

	if (str_concat == NULL)
		return (NULL);

	currentPos = str_concat;

	for (i = 0; i < ac; i++)
	{
		strcpy(currentPos, av[i]);
		currentPos += strlen(av[i]);

		*currentPos = '\n';
		currentPos++;
	}

	*(currentPos - 1) = '\n';
	*(currentPos) = '\0';
	return (str_concat);
}
