#include <stdio.h>

/**
 * main - printing alphabet in reverse
 * Return: Always 0
 */
int main(void)
{
	char inv;

	for (inv = 'z'; inv >= 'a'; inv--)
		putchar(inv);
	putchar('\n');
	return (0);
}
