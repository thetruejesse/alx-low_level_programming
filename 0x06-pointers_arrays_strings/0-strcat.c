#include <stdio.h>
#include <string.h>
/**
 * main - Entry point to the program
 *
 * Return: Always 0. SUCCESS
 */
char *_strcat(char *dest, char *src)
{
	size_t ldest = strlen(dest);
	size_t lsrc = strlen(src);

	char *result = malloc(ldest + lsrc + 1);

	if (result == NULL)
	{
		return NULL;
	}

	strcat(result, dest);
	strcat(result + ldest, src);

	return (0);
}
