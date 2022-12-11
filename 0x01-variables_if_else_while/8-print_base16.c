#include <stdio.h>

/**
 * main - Hexadecimal numbers
 * Return: Always 0
 */
int main(void)
{
	int dig;
	char af;

	for (dig = 0; dig < 10; dig++)
		putchar((dig % 10) + '0');
	for (af = 'a'; af <= 'f'; af++)
		putchar(af);
	putchar('\n');
	return (0);
}
