#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes char c to standard output
 * @c: character to be written
 * Return: On success 1
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
