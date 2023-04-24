#include <stdio.h>

/**
 * print_sign - prints the sign of a number
 * @n: The number of which the sign will be printed
 *
 * Return: 1 if the number is greater than zero
 * 0 if the number is zero
 * -1 if the number is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (putchar('+') 1);
	}
	else if (n == 0)
	{
		return (putchar('0') 0);
	}
	else
	{
		return (putchar('-') 1);
	}
}
