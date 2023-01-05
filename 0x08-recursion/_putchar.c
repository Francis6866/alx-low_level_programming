#include <unistd.h>

/**
 * _putchar - print character to std output
 * @c: character to be printed
 * Return: On success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1))
}

