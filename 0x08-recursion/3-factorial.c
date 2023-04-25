#include "main.h"
/**
 * factorial - function that computes the factorial of a number
 * @n: param of type int to be calculated
 * Return: returns the factorial of @n
 */
int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
