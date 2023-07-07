#include <stdio.h>

/**
 * main - print program name
 * @argc: Argement count
 * @argv: Argument vector
 *
 * Return: Always zero.
 */
int main(int argc __attribute__((unused)), char* argv[])
{
	printf("%s\n", *argv);
	return 0;	
}
