#include "main.h"

/**
 * print_rev - print strig in reverse
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int p = 0;

	while (s[p] != '\0')
		p++;
	for (p = p - 1; p >= 0; p--)
		_putchar(s[p]);
	_putchar('\n');
}
