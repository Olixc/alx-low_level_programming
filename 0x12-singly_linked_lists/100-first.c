#include <stdio.h>

/**
 * global_function - print the data inside the function
 * The __attribute__((constructor)) is used to ensure
 * the function is called before the main function is executed.
 *
 * Return: Always void.
 */
void __attribute__((constructor)) global_function(void)
{
	printf("You're beat! and yet, you must allow,\n"
	"I bore my house upon my back!\n");
}
