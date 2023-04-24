/**
 * _strcat - function that cats 2 strings
 * @dest: First string to be catted
 * @src: Second string to be catted
 *
 * Return: result of the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	while (dest[i])
		i++;
	for(j = 0; src[j]; j++)
		dest[i +j] = src[j];

	dest[i + j]; = '\0';

	return (dest);
}
