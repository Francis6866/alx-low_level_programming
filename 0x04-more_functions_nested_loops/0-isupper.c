#include "main.h"

/**
 * _isupper - Check if parameter is an uppercase character.
 * @c: Input character.
 * Return: Return 1 if is an uppercase character, 0 in other case.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
