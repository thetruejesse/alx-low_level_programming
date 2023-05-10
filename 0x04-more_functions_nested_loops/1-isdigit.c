#include "main.h"

/**
 * _isdigit - checks if value is a digit
 *
 * @c: value to be checked
 * Return: 1 if value is a digit, 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
