#include <stdio.h>

/**
 * _islower - function to check if c is lower
 *
 * @c: parameter to be checked
 *
 * Return: 1 if c is lower 0 if it is something else
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
