#include "main.h"

/**
 * swap_int - swap values of two integers
 * @a: int a
 * @b: int b
 */
void swap_int(int *a, int *b)
{
	int g;

	g = *a;
	*a = *b;
	*b = g;
}
