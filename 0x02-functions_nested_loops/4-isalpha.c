#include <stdio.h>

/**
 * _isalpha - program checks for alpha chars
 *
 * @c: arg taken in as a char and converted to ASCII
 *
 * Return: 1 if @c is a letter lower or upper
 * otherwise Return 0 (success)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
