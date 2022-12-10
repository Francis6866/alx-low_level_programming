#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	int ball;

	for (ball = 0; ball < 10; ball++)
		putchar((ball % 10) + '0');
	putchar('\n');
	return (0);
}
