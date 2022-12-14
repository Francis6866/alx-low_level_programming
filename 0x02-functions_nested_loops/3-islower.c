#include "main.h"

/**
 * _islower - chech lowercase
 * @c: character c
 * Return: Return 1 if true else return 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

