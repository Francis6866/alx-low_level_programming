#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	int d;

	for (d = 18; d < 28; d++)
	{
		putchar(d);
		for (; d != 27; )
		{
			putchar(',');
			putchar(' ');
		}
	putchar('\n');
	}
	return (0);
}
