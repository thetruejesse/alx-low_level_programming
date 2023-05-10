#include "main.h"

/**
 * main - Checks for uppercase character
 * @c: value to be checked
 * @_isupper: checks if a value is uppercase
 *
 * Return 1 if upper
 * Return: 0 if otherwise
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
