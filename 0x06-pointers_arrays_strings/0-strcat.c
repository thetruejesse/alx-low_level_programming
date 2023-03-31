#include <stdio.h>
#include <string.h>
/**
 * main - Entry point to the program
 * @dest: First string to be catted
 * @src: Second string to be catted
 *
 * Return: result of the concatenated string
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

	return result;
}
