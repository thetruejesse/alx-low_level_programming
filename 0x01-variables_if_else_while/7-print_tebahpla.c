#include <stdio.h>

/**
 * main - Entry point of code
 *
 * Return: Always 0 success
 */

int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
