#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Return: Always 0 success
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar('0' + i);
		i++;
	}
	putchar ('\n');

	return (0);
}
