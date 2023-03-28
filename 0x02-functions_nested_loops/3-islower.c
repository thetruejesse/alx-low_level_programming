#include "main.h"
/**
 * _islower - function to if char is lowercase
 *
 * @c: character argument, converted to ASCII
 *
 * Return: Returns (1) Failure if @c is lowercase
 * otherwise always (0) success
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
