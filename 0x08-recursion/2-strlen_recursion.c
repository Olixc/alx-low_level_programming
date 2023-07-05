#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: The string to return it's length
 *
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	return (*s ? (1 + _strlen_recursion(s + 1)) : 0);
}
