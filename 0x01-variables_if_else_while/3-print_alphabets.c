#include <stdio.h>

/**
 * main - uppercase and lowercase letters
 * Return: Always 0
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
		putchar(lc);
	for (lc = 'A'; lc <= 'Z'; lc++)
		putchar(lc);
	putchar('\n');
	return (0);
}
