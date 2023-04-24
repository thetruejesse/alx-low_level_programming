#include <stdio.h>

/**
 * main - Entry point for program
 *
 * Return: Always 0 success
 */

int main(void)
{
	int i = 'a';
	int j = 'A';
	while(i <= 'z')
	{
		putchar(i);
		i++;
	}
	while(j <= 'Z')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
