#include <unistd.h>

/**
 * _putchar - print char to standard output
 * @c: char to be printed
 * Return: always 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

